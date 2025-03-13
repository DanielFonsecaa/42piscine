/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:27:31 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/08 23:11:20 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*arr;

	range = max - min;
	i = 0;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL || min >= max)
		return (NULL);
	while (i < range)
	{
		arr[i] = min + i;
		i ++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main()
{
int	max = 5;
int	min = 0;
int	*bla = ft_range(min, max);
for	(int i = 0; i < 5; i++)
	printf("%d\n", bla[i]);
free(bla);
}*/
