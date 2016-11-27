/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:37:55 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/20 15:48:36 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

/*
**	Cette fonction decale les bits vers le haut
*/

piece	ft_shift_up(piece a)
{
	if (a.l1 == 0)
	{
		a.l1 = a.l2;
		a.l2 = a.l3;
		a.l3 = a.l4;
		a.l4 = 0;
	}
	return (a);
}
