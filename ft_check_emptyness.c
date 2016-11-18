/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_emptyness.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:41:04 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 17:48:11 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

int		ft_check_emptyness(piece grid, piece a)
{
	if ((grid.l1 & a.l1) != 0)
		return (0);
	if ((grid.l2 & a.l2) != 0)
		return (0);
	if ((grid.l3 & a.l3) != 0)
		return (0);
	if ((grid.l4 & a.l4) != 0)
		return (0);
	return (1);
}
