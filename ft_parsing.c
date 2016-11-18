/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:10:29 by niludwig          #+#    #+#             */
/*   Updated: 2016/11/18 11:21:49 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_pars1g(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' || s[i] == '#' || s[i] == '.')
				i++;
		else
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_long_larg(char *s, int i, int c, int c2)
{
	int d;
	int q;

	d = 0;
	q = 0;
	while (s[i])
	{
		if (s[i] == '#')
			d++;
		if (c2 == 4 && c == 0)
		{
			if (s[i] == '\n' && s[i - 1] == '\n')
			{
				i++;
				q++;
				c2 = 0;
				if (d != 4)
					return (0);
				d = 0;
			}
			else
				return (0);
		}
		else if (c == 4)
		{
			if (s[i] == '\n')
			{
				c = 0;
				c2++;
				i++;
			}
			else
				return (0);
		}
		else
		{
			i++;
			c++;
		}
	}
	return (q + 1);
}

int ft_all(char *s, int q)
{
	int i;
	int d;

	i = 0;
	d = 0;
	while (s[i])
	{
		if (s[i] == '#')
		{
			if (s[i - 1] == '#')
				d++;
			if (s[i + 1] == '#')
				d++;
			if (s[i - 5] == '#')
				d++;
			if (s[i + 5] == '#')
				d++;
		}
		i++;
	}
	return (d / q);
}

int ft_check_tetri(char *s, int q)
{
	int i;
	int d;

	i = 0;
	d = ft_all(s, q);
	if (6 > d)
		return (0);
	return (1);
}
