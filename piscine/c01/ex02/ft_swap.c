/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:03:49 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/27 13:00:54 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	n;
	int	b;

	n = 0;
	b = 1;
	printf("%d", n);	
	printf("%d", b);	
	ft_swap(&n, &b);
	printf("%d", n);	
	printf("%d", b);	
}*/
