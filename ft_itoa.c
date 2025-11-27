/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:11:54 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/27 11:23:22 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*caso_cero(char **res)
{
	*res = malloc(2);
	if (!*res)
		return (NULL);
	(*res)[0] = '0';
	(*res)[1] = '\0';
	return (*res);
}

void	rellenar_string(char **res, size_t cont, int n)
{
	while (cont)
	{
		(*res)[cont - 1] = '0' + (n % 10);
		cont--;
		n /= 10;
	}
}

char	*caso_negativo(char **res, long n, size_t cont)
{
	*res = malloc (cont + 2);
	if (!*res)
		return (NULL);
	n = -(n);
	(*res)[cont + 1] = '\0';
	while (cont)
	{
		(*res)[cont] = '0' + (n % 10);
		cont--;
		n /= 10;
	}
	(*res)[0] = '-';
	return (*res);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	cont;
	int		tmp;

	cont = 0;
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		cont++;
	}
	if (n == 0)
		res = caso_cero(&res);
	if (n < 0)
		res = caso_negativo(&res, (long)n, cont);
	if (n > 0)
	{
		res = malloc (cont + 1);
		if (!res)
			return (NULL);
		rellenar_string(&res, cont, n);
		res[cont] = '\0';
	}
	return (res);
}

/*int main(void)
{
	int a = -300;
	int b = 0;
	int c = 165753;
	char *res;
	
	res = ft_itoa(a);
	printf("%s\n", res);
	res = ft_itoa(b);
	printf("%s\n", res);
	res = ft_itoa(c);
	printf("%s\n", res);
	free(res);
	return 0;
}*/
