/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:10:52 by dda-fons          #+#    #+#             */
/*   Updated: 2025/03/05 14:43:21 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	(void)argc;
	while (argv[0][counter])
	{
		write(1, &argv[0][counter], 1);
		counter ++;
	}
	write(1, "\n", 1);
	return (0);
}
