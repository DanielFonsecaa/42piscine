/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:50:27 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 18:26:47 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s2 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
int main() 
{
   	char b[] = "abcCC";
	char a[] = "abaCC";	

	printf("%d\n", ft_strncmp(a,b, 2));
	printf("%d\n", strncmp(a,b, 2)); // -1
    return 0;
}*/
