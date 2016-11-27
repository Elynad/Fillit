/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_con_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <mameyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:44:20 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/26 20:52:26 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void    ft_cont_binary(int n)
{
    if (n >= 2)
    {
        ft_cont_binary(n / 2);
        ft_cont_binary(n % 2);
    }
    else
	{
		ft_putchar(n + '0');
	}
}

t_piece	*ft_con_binary(char *s, int p)
{
	t_piece	*res;
	int l;
	int i2;
	int p2;
	int i;
	int x;

	p2 = p - 1;
	l = 0;
	x = 0;
	i2 = 0;
	i = 0;
	res = (t_piece *)malloc(sizeof(t_piece));
	res->x = 0;
	res->l1 = 0;
	res->l2 = 0;
	res->l3 = 0;
	res->l4 = 0;
	res->y = p * 2;
	if (p != 1)
	{
		i = (p2 * 21) + 1;
	}
	while (s[i] || (s[i] == '\n' && s[i - 1] == '\n'))
	{
		if (s[i] == '\n')
		{
			i2 = 0;
			l++;
		}
		if (l == 0)
		{
			if (s[i] == '#' && s[i])
				res->l1 = res->l1 | (1 << (7 - i2 + 1));
		}
		if(l == 1)
		{
			if (s[i] == '#')
				res->l2 = res->l2 | (1 << (7 - i2 + 1));
		}
		if (l == 2)
		{
			if (s[i] == '#')
				res->l3 = res->l3 | (1 << (7 - i2 + 1));
		}
		if (l == 3)
		{
			if (s[i] == '#')
				res->l4 = res->l4 | (1 << (7 - i2 + 1));
		}
		i2++;
		i++;
	}
	return (res);
}
