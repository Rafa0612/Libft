/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:16:58 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/27 12:34:49 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char my_func(unsigned int i, char c)
{
    if (i % 2 == 0)
        return c - 32;  convierte en mayúscula si es par
    return c;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	i = 0;
	res = malloc(ft_strlen(s) + 1);
	if (!res || !s)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int main(void)
{
	char *res = ft_strmapi("hola", my_func);
	printf("%s\n", res);
	free(res);
}*/
