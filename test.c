/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:28:26 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/19 13:15:16 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		main(int argc, char **argv)
{
	unsigned char		*grid;
	piece				tab[26];

// creation et affichage de la grille
//	*grid = (unsigned char)ft_set_zero(grid);
	grid = (unsigned char *)malloc(sizeof(unsigned char) * 16);
	ft_set_zero(&grid);
	ft_print_grid(grid, 16);
	ft_putchar('\n');
// creation du 1er tetrimino test contenu dans la 1ere case du tableau de struct
	tab[0].l1 = 0;
	tab[0].l2 = 4;
	tab[0].l3 = 7;
	tab[0].l4 = 0;
	ft_print_piece(tab[0]);
	tab[0] = ft_set_up_left(tab[0]);
	ft_print_piece(tab[0]);
	return (0);
}
