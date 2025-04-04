/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:51:54 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 18:27:10 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac,char **av)
{
	char	a[] = "abc";
	char	b[] = "abc";

	printf("%d\n",ft_strcmp(a, b));
	printf("%d\n",strcmp(a,b));
	
}*/
