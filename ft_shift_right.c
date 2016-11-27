/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:05:07 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/19 11:29:11 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

/*
**	Cette fonction decale les bits vers la droite
*/

piece	ft_shift_right(piece a)
{
	while (a.l1 > 1 && a.l2 > 1 && a.l3 > 1 && a.l4 > 1)
	{
		a.l1 /= 2;
		a.l2 /= 2;
		a.l3 /= 2;
		a.l4 /= 2;
	}
	return (a);
}
