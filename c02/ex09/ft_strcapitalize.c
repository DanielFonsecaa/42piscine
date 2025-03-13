/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:51:37 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/03 10:25:50 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upp(char c)
{
	return (c >= 65 && c <= 90);
}

int	ft_is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

int	ft_is_cap(char prev, char curr)
{
	int	result;

	result = 1;
	if (prev >= 65 && prev <= 90)
		result = 0;
	if (prev >= 48 && prev <= 57)
		result = 0;
	if (ft_is_lower(prev))
		result = 0;
	return (result && ft_is_lower(curr));
}

int	ft_low(char prev, char curr)
{
	int	result;

	result = 0;
	if (ft_is_upp(prev))
		result = 1;
	if (ft_is_lower(prev))
		result = 1;
	if (prev >= 48 && prev <= 57)
		result = 1;
	return (result && ft_is_upp(curr));
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 1;
	if (ft_is_lower(str[0]))
		str[0] -= 32;
	while (str[counter])
	{
		if (ft_is_cap(str[counter -1], str[counter]))
			str[counter] -= 32;
		if (ft_low(str[counter -1], str[counter]))
			str[counter] += 32;
		counter ++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	c[] = "saLUt,  ? 42TmOts qWarante-deux; cinquante+et+un";
	char	b[] = "a";
	char	a[] = "asfgfa, fefef, efeff.fefef 454frg efd;fdf ef( fdfd(fd";
	ft_strcapitalize(c);
	ft_strcapitalize(b);
	ft_strcapitalize(a);
	printf("%s\n", c);
	printf("%s\n", b);
	printf("%s\n", a);
}*/
