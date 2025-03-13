/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:27:21 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:25:13 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += 32;
		counter ++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	int	counter;
	char	c[] = "DAaIEL";

	printf("%s\n", c);
	ft_strlowcase(&c[0]);
	counter = 0;
	while (c[counter])
	{
		printf("%c\n", c[counter]);
		counter ++;
	}
	return (0);
}*/
