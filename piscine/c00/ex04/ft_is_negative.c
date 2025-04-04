/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:33:45 by dda-fons          #+#    #+#             */
/*   Updated: 2025/02/25 10:30:29 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
		write(1, &c, 1);
		return ;
	}
	c = 'P';
	write(1, &c, 1);
}
//
//int	main(void)
//{
//	ft_is_negative(-1);
//	ft_is_negative(0);
//	return (0);
//}
