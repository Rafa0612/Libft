/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:55:02 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/13 12:48:16 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	es_minuscula;
	int	es_mayuscula;	

	es_minuscula = (c >= 'a' && c <= 'z');
	es_mayuscula = (c >= 'A' && c <= 'Z');
	if (es_minuscula || es_mayuscula)
		return (1);
	return (0);
}
