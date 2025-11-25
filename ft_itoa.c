/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:11:54 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/25 13:14:04 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	caso_cero(char **res)
{
	*res = malloc(2);
	*res[0] = '0';
	*res[1] = '\0';
}

void	cambiar_signo(int *n, int *signo)
{
	*n = -(*n);
	*signo = 0;
}

char	*ft_itoa(int n)
{
	int		signo;
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
	{
		caso_cero(&res);
		return (res);
	}
	signo = 1;
	if (n < 0)
	{
		cambiar_signo(&n, &signo);
		res = malloc(cont + 2);
	}
	if (n > 0)
	{
		res = malloc (cont + 1);
		res[cont] = '\0';
		cont--;
		while (cont)
		{
			res[cont] = '0' + (n % 10);
			cont--;
			n /= 10;
		}
	}
}
