/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:44:12 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/21 11:59:44 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	tam;

	tam = 0;
	while (*s)
	{
		tam++;
		s++;
	}
	if ((char)*s == '\0' && (char)c == '\0')
		return ((char *)s);
	while (tam)
	{
		s--;
		if ((char)*s == (char)c)
		{
			return ((char *)s);
		}
		tam--;
	}
	return (NULL);
}
