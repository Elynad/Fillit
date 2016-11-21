/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:13:10 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/21 15:02:58 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		main(void)
{
	struct t_piece			pieces[26];
	unsigned short			grid[16];
	int						i;			// Index du tableau des pieces

	i = 0;
	ft_print_grid(grid, 16);
	pieces[0].l1 = 0;
	pieces[0].l2 = 0;
	pieces[0].l3 = 3;
	pieces[0].l4 = 3;
	ft_putchar('\n');
	ft_print_piece(pieces[0]);
	ft_putchar('\n');
	ft_shift_up_left(&pieces[0]);
	ft_print_piece(pieces[0]);
	ft_putchar('\n');
/*
	if (ft_check_emptyness(&pieces[i], grid, 0) == 0)
	{
		grid[0] = grid[0] ^ pieces[0].l1;
		grid[1] = grid[1] ^ pieces[0].l2;
		grid[2] = grid[2] ^ pieces[0].l3;
		grid[3] = grid[3] ^ pieces[0].l4;
//		ft_replace(pieces[i], grid, 0);
	}
	ft_print_grid(grid, 22);
*/
	return (0);
}
