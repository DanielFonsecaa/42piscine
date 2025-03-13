/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:27:21 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:24:24 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] -= 32;
		counter ++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	int	counter;
	char	c[] = "daniDl";

	printf("%s\n", c);
	ft_strupcase(&c[0]);
	counter = 0;
	while (c[counter])
	{
		printf("%c\n", c[counter]);
		counter ++;
	}
}*/
