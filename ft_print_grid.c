/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:05:41 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/19 11:24:39 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

/*
** Cette fonction affiche la grille
*/

void	ft_print_grid(unsigned char *grid, int lines)
{
	int		i;

	i = 0;
	while (i < lines)
	{
		ft_print_binary(grid[i]);
		i++;
	}
}
