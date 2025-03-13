/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:08:11 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/11 18:34:51 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dup(char *str)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_len(str) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	ft_create_struct(char *str)
{
	struct s_stock_str	new_stock;

	new_stock.str = ft_dup(str);
	new_stock.size = ft_len(str);
	new_stock.copy = ft_dup(str);
	return (new_stock);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*structs;
	struct s_stock_str	last;
	int					i;

	structs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (structs == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		structs[i] = ft_create_struct(av[i]);
		i ++;
	}
	last.str = 0;
	structs[i] = last;
	return (structs);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	struct s_stock_str *structs;
	structs = ft_strs_to_tab(ac, av);
	int i;
	i = 0;
	while (structs[i].str != 0)
	{
		printf(" original %s\n", structs[i].str);
		printf(" size %d\n", structs[i].size);
		printf(" copy %s\n", structs[i].copy);
		i++;
	}
	free(structs);
}*/
