/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:59:45 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 18:30:13 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	length;

	length = 0;
	while (dest[length])
		length ++;
	counter = 0;
	while (src[counter] && (counter + length) < size -1)
	{
		dest[length + counter] = src[counter];
		counter ++;
	}
	if (length + counter < size)
		dest[length + counter -1] = '\0';
	else
		dest[size -1] = '\0';
	while (src[counter] != '\0')
		counter ++;
	if (size > length + counter)
		return (size + counter);
	return (counter + length);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
int	main()
{
	char c[] = "daniel sadasd";
	char c2[] = "daniel sadasd";
	char a[] = "waner sadasd";

//	printf("%d\n", ft_strlcat(c,a,25));
	printf("%zu\n", strlcat(c2,a,25));
}*/
