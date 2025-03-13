/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:18:07 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/04 19:08:28 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	i = nb;
	flag = 0;
	while (flag == 0)
	{
		if (ft_is_prime(i))
		{
			flag = 1;
			return (i);
		}
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_find_next_prime(-1));
	printf("%d\n",ft_find_next_prime(-5));
	printf("%d\n",ft_find_next_prime(10));
	printf("%d\n",ft_find_next_prime(3));
	printf("%d\n",ft_find_next_prime(5));
	printf("%d\n",ft_find_next_prime(12));
	printf("%d\n",ft_find_next_prime(18));
}*/
