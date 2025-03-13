/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:27:33 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/09 12:26:48 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_getbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (-1);
		j = 0;
		while (j < i)
		{
			if (str[i] == str[j])
				return (-1);
			j ++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	long	temp;
	int		base_size;

	base_size = ft_getbase(base);
	temp = (long) nbr;
	if (base_size < 2)
		return ;
	if (temp < 0)
	{
		temp = -temp;
		write(1, "-", 1);
	}
	if (temp >= base_size)
		ft_putnbr_base(temp / base_size, base);
	c = base[temp % base_size];
	write(1, &c, 1);
}
/*
int	main(void)
{
ft_putnbr_base(42, "0123456789");  // Decimal base
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");  // Binary base
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");  // Hexadecimal base
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");  // Custom octal base
	write(1, "\n", 1);i
}*/
