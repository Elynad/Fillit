/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_tetris.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 00:59:48 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/14 00:59:50 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_destroy_tetris(size_t count, t_tetri **tetri)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(tetri[i]);
		++i;
	}
	free(tetri);
}
