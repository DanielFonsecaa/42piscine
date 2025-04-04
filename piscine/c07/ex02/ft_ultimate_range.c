/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:56:49 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/11 13:25:06 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i ++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = -4;
	int max = 5;
	int	*bla; 
	int range = ft_ultimate_range(&bla, min, max);
	printf("%i, ", range);
	for (int i = 0; i< max -min; i++)
	{
		printf("%d", bla[i]);
	}
	free(bla);
}*/
