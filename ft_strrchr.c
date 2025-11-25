/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:44:12 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/25 12:10:15 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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

/*int main(void)
{
	char *ptr = "abc";
	printf ("%s\n", ft_strrchr(ptr, ' '));
	printf ("%s\n", strrchr(ptr, ' '));
}*/
