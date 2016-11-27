/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <mameyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:49:36 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/26 20:52:22 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include "libft.h"

/*void	ft_shift_left(t_piece *a)
{
	if (a->l1 < 2147483648 || a->l2 < 2147483648 \
			|| a->l3 < 2147483648 || a->l4 < 2147483648)
	{
		a->l1 *= 2;
		a->l2 *= 2;
		a->l3 *= 2;
		a->l4 *= 2;
	}
}*/

void	ft_shift_right(t_piece *a)
{
	ft_putnbr(a->l1);
	ft_putnbr(a->l2);
	ft_putnbr(a->l3);
	ft_putnbr(a->l4);
	if (a->l1 > 1 || a->l2 > 1 || a->l3 > 1 || a->l4 > 1)
	{
		a->l1 /= 2;
		a->l2 /= 2;
		a->l3 /= 2;
		a->l4 /= 2;
	}
}

/*void	ft_shift_up(t_piece *a)
{
	if (a->l1 == 0)
	{
		a->l1 = a->l2;
		a->l2 = a->l3;
		a->l3 = a->l4;
		a->l4 = 0;
	}
}*/

void	ft_shift_down(t_piece *a)
{
	if (a->l4 == 0)
	{
		a->l4 = a->l3;
		a->l3 = a->l2;
		a->l2 = a->l1;
		a->l1 = 0;
	}
}

/*void	ft_set_up_left(t_piece *a)
{
	while (a->l1 == 0)
		ft_shift_up(a);
	while (a->l1 < 2147483647 && a->l2 < 2147483647 \
			&& a->l3 < 2147483647 && a->l4 < 2147483647)
		ft_shift_left(a);
}*/
