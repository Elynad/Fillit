/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:39:46 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 16:41:16 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

/*
**	Cette fonction decale les bits vers le bas
*/

piece	ft_shift_down(piece a)
{
	if (a.l4 == 0)
	{
		a.l4 = a.l3;
		a.l3 = a.l2;
		a.l2 = a.l1;
		a.l1 = 0;
	}
	return (a);
}
