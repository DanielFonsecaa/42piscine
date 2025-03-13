/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:51:15 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 10:29:16 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;

	counter = 0;
	while (counter < size / 2)
	{
		temp = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = temp;
		counter ++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[] = {0, 2, 4, 6, 8, 10};
	int	counter;

	counter = 0;
	size = 6;
	ft_rev_int_tab(&tab[counter], size);
	while (counter < size)
	{
		printf("%d", tab[counter]);
		counter ++;
	}
	return (0);
}*/
