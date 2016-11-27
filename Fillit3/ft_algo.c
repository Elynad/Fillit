/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:33:05 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/26 18:05:15 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

unsigned int	*ft_algo(unsigned int *grid, struct t_piece *pieces, \
				int nbr_pieces)
{
	int		size_max;
	int		i;

	size_max = (ft_sqrt(nbr_pieces * 4));
	i = 0;
	while (i <= nbr_pieces)
	{
		ft_check_and_replace(grid, pieces, i);
		i++;
	}
	ft_print_grid(grid);
	return (grid);
}
