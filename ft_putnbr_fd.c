/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabeid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:34:57 by aabeid            #+#    #+#             */
/*   Updated: 2021/11/09 11:42:09 by aabeid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

static void	ft_putnbr(long nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar('-', fd);
		ft_putnbr(nb * (-1), fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else
	{
		ft_putchar(nb + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	ft_putnbr(nb, fd);
}

/*int main()
{
	ft_putnbr_fd(-2147483648, 1);
	return 0;
}*/
