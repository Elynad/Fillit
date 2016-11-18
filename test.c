/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:28:26 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 17:58:29 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		main(int argc, char **argv)
{
	piece				grid;
	piece				tab[26];
	int					i;

// creation de la grille
	grid.l1 = 0;
	grid.l2 = 0;
	grid.l3 = 0;
	grid.l4 = 0;

	i = 0;
	ft_print_piece(grid);
	tab[0].l1 = 4;
	tab[0].l2 = 7;
	tab[0].l3 = 0;
	tab[0].l4 = 0;
	while (tab[0].l1 < 64)
		tab[0] = ft_shift_left(tab[0]);
	ft_print_piece(tab[0]);
	tab[0] = ft_shift_left(tab[0]);
	ft_print_piece(tab[0]);
	while (i < 26)
	{
		if (ft_check_emptyness(grid, tab[i]) == 1)
			grid = ft_replace(grid, tab[i]);
		i++;
	}
	ft_print_piece(grid);
	return (0);
}
