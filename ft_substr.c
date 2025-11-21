/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:06:05 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/17 11:02:22 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
	{
		slen = ft_strlen(s + start);
	}
	else
		slen = len;
	ptr = malloc (slen + 1);
	if (!ptr)
		return (NULL);
	s = s + start;
	ft_strlcpy(ptr, s, slen + 1);
	return (ptr);
}
