/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:02:14 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:23:54 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (!(str[counter] >= 32 && str[counter] <= 126))
			return (0);
		counter ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_printable("asdasdad"));
	printf("%d\n", ft_str_is_printable("asdasdaasdasd"));
	printf("%d\n", ft_str_is_printable("asdi\t\nasdad"));
	printf("%d\n", ft_str_is_printable(""));
}*/
