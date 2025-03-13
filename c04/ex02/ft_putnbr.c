/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:15:44 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/09 12:26:45 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
/*
int	main()
{
	ft_putnbr(1234);
		write(1, "\n", 1);
	ft_putnbr(-2147483648);
		write(1, "\n", 1);
	ft_putnbr(2147483647);
		write(1, "\n", 1);
	ft_putnbr(0);
		write(1, "\n", 1);
	ft_putnbr(123);
		write(1, "\n", 1);
	ft_putnbr(-1234);
		write(1, "\n", 1);
	ft_putnbr(643);
		write(1, "\n", 1);
}*/
