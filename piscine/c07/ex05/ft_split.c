/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:00:39 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/10 19:22:30 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_bla(char *charset, char *str)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(charset, str[i]))
			i++;
		if (str[i] && !ft_is_sep(charset, str[i + 1]))
		{
			words++;
			while (str[i] && !ft_is_sep(charset, str[i]))
				i++;
		}
	}
	return (words);
}

char	*ft_dup(char *charset, char *src)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	while (src[i] && ft_is_sep(charset, src[i]))
		i++;
	j = 0;
	while (src[i + j] && !ft_is_sep(charset, src[i + j]))
		j++;
	dest = malloc(sizeof(char) * (j + 1));
	if (dest == NULL)
		return (NULL);
	k = 0;
	while (k < j)
	{
		dest[k] = src[i + k];
		k++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		words;

	i = 0;
	words = ft_bla(charset, str);
	dest = malloc(sizeof(char *) * (words + 1));
	if (dest == NULL)
		return (NULL);
	while (i < words)
	{
		while (*str && ft_is_sep(charset, *str))
			str++;
		if (*str == '\0')
			break ;
		dest[i] = ft_dup(charset, str);
		str += ft_len(dest[i]);
		i++;
	}
	dest[words] = NULL;
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char **bla = ft_split("blabla,bla,,ble;primade4", ",;");
	while (*bla)
	{
		printf("%s\n", *bla);
		bla++;
	}
	free(*bla);
}*/
