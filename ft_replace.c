/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:46:59 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 17:50:42 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

piece	ft_replace(piece grid, piece a)
{
	grid.l1 = grid.l1 ^ a.l1;
	grid.l2 = grid.l2 ^ a.l2;
	grid.l3 = grid.l3 ^ a.l3;
	grid.l4 = grid.l4 ^ a.l4;

	return (grid);
}
