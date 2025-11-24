/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:48:41 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/24 14:43:59 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	contar_palabras(const char *s, char c)
{
	size_t	i;
	size_t	cont;

	cont = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			cont++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (cont);
}

char	**ft_split(const char *s, char c)
{
	char	**pptr;
	size_t	index_s;
	size_t	index_ptr;
	size_t	ini;
	size_t	len;

	pptr = malloc(sizeof(char *) * (contar_palabras(s, c) + 1));
	if (!pptr)
		return (NULL);
	index_ptr = 0;
	index_s = 0;
	while (s[index_s])
	{
		while (s[index_s] && s[index_s] == c)
			index_s++;
		if (s[index_s])
		{
			ini = index_s;
			while (s[index_s] && s[index_s] != c)
				index_s++;
			len = index_s - ini + 1;
			pptr[index_ptr] = malloc(len);
			ft_strlcpy(pptr[index_ptr], s + ini, len);
			index_ptr++;
		}
		pptr[index_ptr] = NULL;
	}
	return (pptr);
}
