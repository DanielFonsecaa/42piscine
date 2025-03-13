/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:15:38 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/09 12:27:07 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[i] == str[j])
				return (0);
			j ++;
		}
		i++;
	}
	return (i);
}

int	ft_convert(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_size;

	result = 0;
	sign = 1;
	i = 0;
	base_size = ft_getbase(base);
	if (base_size < 2)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_convert(base, str[i] != -1))
	{
		result = result * base_size + ft_convert(base, str[i]);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "2A";
	char base[] = "0123456789ABCDEF";
	printf("%d\n", ft_atoi_base(str,base));
}*/
