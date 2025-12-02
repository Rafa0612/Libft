/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:34:59 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/02 12:03:16 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;
	void	*contenido;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		contenido = f(lst->content);
		aux = ft_lstnew(contenido);
		if (!aux)
		{
			del(contenido);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, aux);
		lst = lst->next;
	}
	return (res);
}
