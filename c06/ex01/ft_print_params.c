/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:17:00 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/05 14:37:00 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;
	int	inner_counter;

	counter = 1;
	if (argc < 2)
		return (0);
	while (argv[counter])
	{
		inner_counter = 0;
		while (argv[counter][inner_counter])
		{
			write(1, &argv[counter][inner_counter], 1);
			inner_counter ++;
		}
		write(1, "\n", 1);
		counter ++;
	}
	return (0);
}
