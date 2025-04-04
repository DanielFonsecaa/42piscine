/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:20:46 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 10:29:25 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	inner_counter;
	int	temp;

	counter = 0;
	while (counter < size)
	{
		inner_counter = counter + 1;
		while (inner_counter < size)
		{
			if (tab[counter] > tab[inner_counter])
			{
				temp = tab[counter];
				tab[counter] = tab[inner_counter];
				tab[inner_counter] = temp;
			}
			inner_counter ++;
		}
		counter ++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[] = {7,2,1,0,5,3};
	int	counter;

	counter = 0;
	size = 6;
	ft_sort_int_tab(&tab[0], size);
	
	while(counter < size)
	{
		printf("%d", tab[counter]);
		counter ++;
	}
}*/
