/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_replace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <mameyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:57:06 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/26 20:52:23 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include "libft.h"

int		ft_is_empty(unsigned int *grid, t_piece *piece, int index)
{
	if ((grid[index] & piece->l1) == 0 \
			&& (grid[index + 1] & piece->l2) == 0 \
			&& (grid[index + 2] & piece->l3) == 0 \
			&& (grid[index + 3] & piece->l4) == 0)
				return (0);
	else
		return (1);
}

void	ft_replace(unsigned int *grid, t_piece *piece, int index)
{
	grid[0] ^= piece[index].l1;
	grid[1] ^= piece[index].l2;
	grid[2] ^= piece[index].l3;
	grid[3] ^= piece[index].l4;
}

void	ft_check_and_replace(unsigned int *grid, t_piece *piece, \
		int index)
{
	if (ft_is_empty(grid, piece, index) == 0)
		ft_replace(grid, piece, index);
	else
	{
		ft_shift_right(piece);
		ft_check_and_replace(grid, piece, index);
	}
}
