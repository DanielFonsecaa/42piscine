/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:10:41 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:21:36 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (!(str[counter] >= '0' && str[counter] <= '9'))
			return (0);
		counter ++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        char    c[] = "1235  ";
        printf("%d\n", ft_str_is_numeric(&c[0]));
}*/
