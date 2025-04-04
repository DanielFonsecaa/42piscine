/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:25:50 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 18:26:35 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	counter;

	counter = 0;
	length = 0;
	while (dest[length])
		length ++;
	while (counter < nb && src[counter])
	{
		dest[length + counter] = src[counter];
		counter ++;
	}
	dest[length + counter] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	c[30] = "julio ";
	char	c2[30] = "julio ";
	char	d[] = "ama o dan";

	printf("%s\n", ft_strncat(c,d,5));
	printf("%s\n", strncat(c2,d,5));
}*/
