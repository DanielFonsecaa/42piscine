/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:20:08 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:22:05 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (!(str[counter] >= 'a' && str[counter] <= 'z'))
			return (0);
		counter ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char	c[] = "daAAniel";

	printf("%d\n" , ft_str_is_lowercase(&c[0]));
}*/
