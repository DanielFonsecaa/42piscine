/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:00:47 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:19:52 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter ++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[50];

	printf("Origem: %s\n", src);
	printf("Destino: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Origem: %s\n", src);
	printf("Destino: %s\n", dest);
}*/
