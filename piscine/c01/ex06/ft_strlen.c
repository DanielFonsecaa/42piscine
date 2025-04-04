/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:33:14 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 10:29:09 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter ++;
	}
	return (counter);
}
/*
int	main(void)
{
	char	c[] = "daniel";
	printf("%d\n", ft_strlen(&c[0]));
}*/
