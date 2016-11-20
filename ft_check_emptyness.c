/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_emptyness.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:19:46 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/20 18:42:08 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

int		ft_check_emptyness(struct t_piece *a, unsigned short *grid, int index)
{
	if ((a->l1 & grid[index]) != 0)
		return (1);
	if ((a->l2 & grid[index + 1]) != 0)
		return (1);
	if ((a->l3 & grid[index + 2]) != 0)
		return (1);
	if ((a->l4 & grid[index + 3]) != 0)
		return (1);
	else
		return (0);
}
