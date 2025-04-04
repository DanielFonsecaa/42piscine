/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:44:15 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 10:30:54 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int number)
{
	char	a;
	char	b;

	a = (number / 10) + '0';
	b = (number % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_numbers(n1);
			write(1, " ", 1);
			ft_print_numbers(n2);
			if (n1 < 98)
				write(1, ", ", 2);
			n2 ++;
		}
		n1 ++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
