/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:48:59 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 10:30:40 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_check_if(char c, char x, char i);

void	ft_check_if(char c, char x, char i)
{
	if (c == '7' && x == '8' && i == '9')
	{
		write(1, &c, 1);
		write(1, &x, 1);
		write(1, &i, 1);
		return ;
	}
	write(1, &c, 1);
	write(1, &x, 1);
	write(1, &i, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	c;
	char	x;
	char	i;

	c = '0';
	while (c < '8')
	{
		x = c + 1;
		while (x < '9')
		{
			i = x + 1;
			while (i <= '9')
			{
				ft_check_if(c, x, i);
				i ++;
			}
			x ++;
		}
		c ++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
