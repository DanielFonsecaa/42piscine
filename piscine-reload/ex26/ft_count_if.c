/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:35:35 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/03 14:43:05 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_ifalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			result ++;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	char *tab[] = {"asdsa", "ASD", "asdaA"};
	int r = ft_count_if(tab, ft_ifalpha);
	printf("%d\n", r);
}*/
