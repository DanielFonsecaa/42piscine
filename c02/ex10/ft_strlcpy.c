/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:55:01 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:26:37 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	inner_counter;

	counter = 0;
	inner_counter = 0;
	while (src[counter])
		counter ++;
	if (size > 0)
	{
		while (src[inner_counter] && inner_counter < size -1)
		{
			dest[inner_counter] = src[inner_counter];
			inner_counter ++;
		}
		dest[inner_counter] = '\0';
	}
	return (counter);
}
/*
#include <stdio.h>
int main()
{
    char dest1[] = "";
    char src1[] = "Hello, World!";
    unsigned int result = ft_strlcpy(dest1, src1, 2);
    printf("%u\n", result);
    return 0;
}*/
