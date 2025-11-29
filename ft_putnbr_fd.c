/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:04:53 by rpena-ro            #+#    #+#           */
/*   Updated: 2025/11/27 19:04:53 by rpena-ro           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

/*int main (void)
{
	int a = 95;
	int b = INT_MIN;
	int c = 0;
	ft_putnbr_fd(a,1);
	write(1,"\n",1);
	ft_putnbr_fd(b,1);
	write(1,"\n",1);
	ft_putnbr_fd(c,1);
	write(1,"\n",1);
	return 0;
}*/