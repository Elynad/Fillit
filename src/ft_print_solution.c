/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 01:01:08 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/14 01:01:09 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"
#include <unistd.h>

static size_t	ft_str_index(t_square *square, t_tetri *tetri, size_t block)
{
	return (tetri->blocks[block].x + tetri->x
			+ (tetri->blocks[block].y + tetri->y) * (square->size + 1));
}

void			ft_print_solution(t_square *restrict square, size_t count,
									t_tetri **restrict tetris)
{
	size_t	len;
	char	str[square->size * (square->size + 1)];
	size_t	i;
	size_t	u;

	len = square->size * (square->size + 1);
	i = 0;
	while (i < len)
	{
		str[i] = (i % (square->size + 1) == square->size) ? '\n' : '.';
		++i;
	}
	i = 0;
	while (i < count)
	{
		u = 0;
		while (u < 4)
		{
			str[ft_str_index(square, tetris[i], u)] = 'A' + i;
			u++;
		}
		i++;
	}
	write(1, str, len);
}
