/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafa0612 <rafa0612@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:07:46 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/29 16:16:52 by rafa0612         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
