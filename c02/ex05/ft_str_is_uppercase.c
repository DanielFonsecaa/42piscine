/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:26:34 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:23:13 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (!(str[counter] >= 'A' && str[counter] <= 'Z'))
			return (0);
		counter ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "AAa";
	printf("%d\n", ft_str_is_uppercase(&str[0]));
}*/
