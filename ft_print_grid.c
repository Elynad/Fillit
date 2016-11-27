/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:17:41 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/20 18:42:30 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

void	ft_print_grid(unsigned short *grid, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_print_binary(*grid);
		i++;
	}
}

void	ft_print_piece(struct t_piece a)
{
	ft_print_binary(a.l1);
	ft_print_binary(a.l2);
	ft_print_binary(a.l3);
	ft_print_binary(a.l4);
}
