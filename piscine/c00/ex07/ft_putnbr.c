/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:08:27 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 16:36:59 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_algorithm(int nbr)
{
	int	divisor;

	divisor = 1;
	while (nbr >= 10)
	{
		divisor *= 10;
		nbr /= 10;
	}
	return (divisor);
}

void	ft_calculator(int nb, int divisor)
{
	char	number;

	while (divisor > 0)
	{
		number = (nb / divisor) + '0';
		write(1, &number, 1);
		nb %= divisor;
		divisor /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int	divisor;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == 2147483647)
	{
		write (1, "2147483647", 10);
		return ;
	}
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	divisor = ft_find_algorithm(nb);
	ft_calculator(nb, divisor);
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
}*/
