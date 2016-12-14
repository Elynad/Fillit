/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 01:01:34 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/14 01:01:35 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int			ft_move_up(t_square *square, t_tetri *tetri)
{
	if (tetri->x + tetri->width < square->size)
		++(tetri->x);
	else if (tetri->y + tetri->height < square->size)
	{
		tetri->x = 0;
		++(tetri->y);
	}
	else
		return (0);
	return (1);
}

int			ft_finded(t_square *square, t_tetri *tetri)
{
	size_t	shifter;

	shifter = 28 - tetri->x;
	if ((square->grid[tetri->y] & (((unsigned int)tetri->box.l1) << shifter))
			|| (square->grid[tetri->y + 1]
			& (((unsigned int)tetri->box.l2) << shifter))
			|| (square->grid[tetri->y + 2]
			& (((unsigned int)tetri->box.l3) << shifter))
			|| (square->grid[tetri->y + 3]
			& (((unsigned int)tetri->box.l4) << shifter)))
		return (0);
	square->grid[tetri->y] ^= ((unsigned int)tetri->box.l1) << shifter;
	square->grid[tetri->y + 1] ^= ((unsigned int)tetri->box.l2) << shifter;
	square->grid[tetri->y + 2] ^= ((unsigned int)tetri->box.l3) << shifter;
	square->grid[tetri->y + 3] ^= ((unsigned int)tetri->box.l4) << shifter;
	return (1);
}

void		ft_not_finded(t_square *square, t_tetri *tetri)
{
	size_t	shifter;

	shifter = 28 - tetri->x;
	square->grid[tetri->y] ^= ((unsigned int)tetri->box.l1) << shifter;
	square->grid[tetri->y + 1] ^= ((unsigned int)tetri->box.l2) << shifter;
	square->grid[tetri->y + 2] ^= ((unsigned int)tetri->box.l3) << shifter;
	square->grid[tetri->y + 3] ^= ((unsigned int)tetri->box.l4) << shifter;
}

int			ft_solve_one(t_square *square, size_t count,
			t_tetri **tetris, size_t i)
{
	if (i >= count)
		return (1);
	if (tetris[i]->prev)
	{
		tetris[i]->x = tetris[i]->prev->x;
		tetris[i]->y = tetris[i]->prev->y;
	}
	else
	{
		tetris[i]->x = 0;
		tetris[i]->y = 0;
	}
	while (1)
	{
		if (ft_finded(square, tetris[i]))
		{
			if (ft_solve_one(square, count, tetris, i + 1))
				return (1);
			ft_not_finded(square, tetris[i]);
		}
		if (!ft_move_up(square, tetris[i]))
			return (0);
	}
}

void		ft_solve(t_square *square, size_t count, t_tetri **tetris)
{
	while (!ft_solve_one(square, count, tetris, 0))
		++(square->size);
}
