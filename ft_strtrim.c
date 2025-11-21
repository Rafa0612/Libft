/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:40:32 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/21 13:57:34 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	ptr = malloc (ft_strlen(s1));
	while (i <= ft_strlen(s1))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			while (s1[i] == set[j])
				i++;
			j++;
		}
		*ptr++ = s1[i];
	}
	return (ptr);
}
