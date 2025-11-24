/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:40:32 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/24 12:21:49 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	size_t	inicio;
	size_t	final;

	if (!s1 || !set)
		return (NULL);
	inicio = 0;
	final = ft_strlen(s1);
	while (s1[inicio] && in_set(s1[inicio], set))
		inicio++;
	while (final > inicio && in_set(s1[final - 1], set))
		final--;
	ptr = malloc(final - inicio + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + inicio, final - inicio + 1);
	return (ptr);
}
