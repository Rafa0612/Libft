/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafa0612 <rafa0612@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:48:41 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/29 14:33:44 by rafa0612         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

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

int	actu_pprt(char *inis, size_t len, size_t *index_ptr, char **ptr)
{
	ptr[*index_ptr] = malloc(len);
	if (!ptr[*index_ptr])
		return (0);
	ft_strlcpy(ptr[*index_ptr], inis, len);
	(*index_ptr)++;
	return (1);
}

size_t	contar_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**pptr;
	size_t	index_s;
	size_t	index_ptr;
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
			len = contar_len(s + index_s, c) + 1;
			if (!actu_pprt((char *)s + index_s, len, &index_ptr, pptr))
				return (NULL);
			index_s += len - 1;
		}
	}
	pptr[index_ptr] = NULL;
	return (pptr);
}

/*int	main(void)
{
	int	i=0, j=0;
	const char	*a = " Hola     me  llamo              paco";
	char **res1 , **res2;
	res1 = ft_split(a, ' ');
	//res2 = split(a, ' ');
	while (res1[i])
	{
		printf("Palabra[%d] = %s\n", i, res1[i]);
		i++;
	}
	while (res2[j])
	{
		printf("Palabra[%d] = %s\n", j, res2[j]);
		j++;
	}*/	
//	return 0;
//}
