/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:19:24 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/04 19:08:20 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res * res <= nb)
		res ++;
	if ((res -1) * (res -1) == nb)
		return (res - 1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(-64));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(7));
	return (0);
}*/
