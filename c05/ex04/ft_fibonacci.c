/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:14:43 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/04 19:08:16 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 0 && index < 2)
		return (1);
	if (index == 3)
		return (2);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(-3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(8));
}*/
