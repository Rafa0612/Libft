/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:38:49 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/13 12:53:13 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	int	es_digito;
	int	es_mayus;
	int	es_minus;

	es_mayus = (a >= 'A' && a <= 'Z');
	es_minus = (a >= 'a' && a <= 'z');
	es_digito = (a >= '0' && a <= '9');
	if (es_mayus || es_minus || es_digito)
		return (1);
	return (0);
}
