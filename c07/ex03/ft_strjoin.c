/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:22:11 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/08 23:12:38 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	counter;
	int	inner_counter;

	total_len = 0;
	sep_len = 0;
	counter = 0;
	while (counter < size)
	{
		inner_counter = 0;
		while (strs[counter][inner_counter++])
			total_len++;
		counter ++;
	}
	while (sep[sep_len])
		sep_len++;
	total_len += sep_len * (size - 1);
	return (total_len + 1);
}

void	ft_cpy(char *arr, char *str, int *z)
{
	int	i;

	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	*z += i;
}

void	ft_join(char **strs, char *sep, int size, char *arr)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (i < size)
	{
		ft_cpy(&arr[z], strs[i], &z);
		if (i + 1 != size)
			ft_cpy(&arr[z], sep, &z);
		i++;
	}
	arr[z] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*arr;

	if (size == 0)
	{
		arr = (char *)malloc(1);
		if (arr == NULL)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	total_len = ft_total(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * total_len);
	if (strs == NULL)
		return (NULL);
	ft_join(strs, sep, size, arr);
	return (arr);
}
/*
#include <stdio.h>
int    main()
{
	int	size = 5;
	char *strs[] = {"hello", "word", "daniel", "gosta", "do afonso"};
	char *sep = ", ";

	int total_len = ft_total(size, strs, sep);
	printf("length: %d\n ", total_len);
	char *result = ft_strjoin(size, strs, sep);
	printf("result: %s\n", result);
	free(result);
}*/
