/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:25:14 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 18:26:19 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	counter;

	length = 0;
	counter = 0;
	while (dest[length])
		length ++;
	while (src[counter])
	{
		dest[length + counter] = src[counter];
		counter++;
	}
	dest[length + counter] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	a[] = "lindo";
	char	b[] = "daniel ";

	printf("%s\n", ft_strcat(b,a));
	printf("%s\n", strcat(b,a));
}*/
