/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:31:27 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/20 18:41:57 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

void	ft_replace(struct t_piece a, unsigned short *grid, int index)
{
	grid[index] = grid[index] ^ a.l1;
	grid[index + 1] = grid[index + 1] ^ a.l2;
	grid[index + 2] = grid[index + 2] ^ a.l3;
	grid[index + 3] = grid[index + 3] ^ a.l4;
}
