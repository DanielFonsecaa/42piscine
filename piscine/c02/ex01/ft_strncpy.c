/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:49:48 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:20:30 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter ++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter ++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[23];
	char	src[] = "Testetes tet";
	
	printf("%s\n", ft_strncpy(dest, src, 20));
}*/
