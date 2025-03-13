/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:54:27 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/04 19:08:24 by dda-fons         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_is_prime(0));
	printf("%d\n",ft_is_prime(1));
	printf("%d\n",ft_is_prime(2));
	printf("%d\n",ft_is_prime(7));
	printf("%d\n",ft_is_prime(11));
	printf("%d\n",ft_is_prime(13));
	printf("%d\n",ft_is_prime(17));
	printf("%d\n",ft_is_prime(23));
	printf("%d\n",ft_is_prime(29));
	printf("%d\n",ft_is_prime(31));
	printf("%d\n",ft_is_prime(10));
}*/
