/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:08:09 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 18:00:19 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	current;

	counter = 0;
	current = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[counter])
	{
		current = 0;
		while (str[counter + current] == to_find[current])
		{
			if (to_find[current + 1] == '\0')
				return (&str[counter]);
			current ++;
		}
		counter ++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	c[] = "alex e julio feios";
	char	d[] = "ei";
	char	c2[] = "alex e julio feios";

	printf("%s\n", ft_strstr(c,d));
	printf("%s\n", strstr(c,d));
}*/
