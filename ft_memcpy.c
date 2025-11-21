/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:58:54 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/13 13:25:03 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_src = (const unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (n--)
	{
		*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}
