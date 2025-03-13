/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:57:48 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/10 19:17:00 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_getbase(char *base);
int	ft_atoi(char *str, char *base);
int	ft_convert(char *base, char c);

char	*ft_build(int len, char *base, int nb, int base_len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len -1] = base[nb % base_len];
		nb /= base_len;
		len --;
	}
	return (str);
}

char	*ft_base(int nb, char *base)
{
	char	*str;
	int		base_len;
	int		len;
	int		sign;
	int		temp;

	base_len = ft_getbase(base);
	len = 1;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
		len++;
	}
	temp = nb;
	while (temp >= base_len)
	{
		temp /= base_len;
		len++;
	}
	str = ft_build(len, base, nb, base_len);
	if (sign)
		str[0] = '-';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*result;

	if (ft_getbase(base_from) == 0 || ft_getbase(base_to) == 0)
		return (NULL);
	num = ft_atoi(nbr, base_from);
	result = ft_base(num, base_to);
	return (result);
}
/*
int	main()
{
	char *result = ft_convert_base("20", "0123456789", "01");
	printf("10 in base 10 is %s in base 2\n", result);
	free(result);
	result = ft_convert_base("101010", "01", "0123456789ABCDEF");
	printf("1010 in base 2 is %s in base 16\n", result);
	free(result);
}*/
