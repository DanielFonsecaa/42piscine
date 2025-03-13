/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:11:16 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/04 16:19:36 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb = nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",	ft_recursive_factorial(6));
	return (0);
}*/
