/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:05:41 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 17:34:48 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

/*
** Cette fonction affiche la grille	     -- Ne fonctionne pas
*/

void	ft_print_grid(unsigned long int *grid)
{
	int		i;

	i = 0;
	while (i <= 4)
	{
		ft_print_binary(grid[i]);
		i++;
	}
}
