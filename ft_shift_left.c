/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:05:07 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 16:12:35 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

/*
**	Cette fonction decale les bits vers la gauche
*/

piece	ft_shift_left(piece a)
{
	a.l1 *= 2;
	a.l2 *= 2;
	a.l3 *= 2;
	a.l4 *= 2;

	return (a);
}