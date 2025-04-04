/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:48:01 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/02 12:02:46 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*dest;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	dest = malloc(sizeof(int) * range);
	if (dest == NULL)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	int	min = 1;
	int max = 3;
	int	*dest = ft_range(min, max);

	for (int i = 0; i < max - min; i++)
		printf("%d\n", dest[i]);
	free(dest);
}*/
