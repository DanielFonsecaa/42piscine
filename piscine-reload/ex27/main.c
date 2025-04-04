/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:17:22 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/03 18:26:54 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_read(int fd)
{
	char	c;
	int		r;

	while (1)
	{
		r = read(fd, &c, 1);
		if (!r)
			break ;
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	find;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	find = open(argv[1], O_RDONLY);
	if (find == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	ft_read(find);
	close(find);
	return (0);
}
