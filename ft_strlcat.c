/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:13:41 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/21 11:51:48 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	tam(char *dst)
{
	size_t	tam;

	tam = 0;
	while (dst[tam])
		tam++;
	return (tam);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tam_dst;
	size_t	tam_src;
	size_t	i;

	i = 0;
	tam_dst = tam(dst);
	tam_src = tam((char *) src);
	if (size == 0)
		return (tam_src);
	if (size <= tam_dst)
	{
		return (size + tam_src);
	}
	else
	{
		while (src[i] && tam_dst + i < size -1)
		{
			dst[tam_dst + i] = src[i];
			i++;
		}
		dst[tam_dst + i] = '\0';
	}
	return (tam_dst + tam_src);
}
