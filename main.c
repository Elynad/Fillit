/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:10:19 by niludwig          #+#    #+#             */
/*   Updated: 2016/11/26 17:04:11 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void		ft_disp(int fd, char *s)
{
	int i;
	char	buffer[BUFF_SIZE];
	char	*new;
	int q;
	t_piece *res;
	static unsigned int tab[22];
	unsigned int u;
	int i2;
	unsigned int u1;
	unsigned int u2;
	unsigned int u3;
	int q2;
	int k;
	int b;
	int x;
	int x1;
	int x2;
	int x3;
	int xc;

	x = 0;
	x1 = 0;
	x2 = 0;
	x3 = 0;
	xc = 0;
	k = 0;
	i = 0;
	q = 0;
	u = 0;
	u1 = 0;
	u2 = 0;
	u3 = 0;
	i2 = 0;
	q2 = 0;
	while (read(fd, buffer, BUFF_SIZE))
	{
		i++;
		if (i > 547)
		{
			ft_putstr("error_safe\n");
			return ;
		}
		ft_bzero(buffer, 1);
	}
	new = (char *)malloc(sizeof(char) * (i + 1));
	new[i] = 0;
	close(fd);
	i = 0;
	fd = open(s, O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		new[i] = *buffer;
		i++;
	}
	ft_putchar('\n');
	if (ft_pars1g(new) == 0)
	{
		ft_putchar('w');
		return ;
	}
	q = ft_check_long_larg(new, 0, 0, 0);
	if (q == 0)
		{
			ft_putchar('a');
			return ;
		}
	if (ft_check_tetri(new, q) == 0)
		{
			ft_putchar('e');
			return ;
		}
	i = 1;
	while (i <= q)
	{
		res = ft_con_binary(new, i);
		u = (unsigned int)res->l1;
		u1 = (unsigned int)res->l2;
		u2 = (unsigned int)res->l3;
		u3 = (unsigned int)res->l4;
		x = res->x;
		x1 = res->x1;
		x2 = res->x2;
		x3 = res->x3;
		xc = res->xc;
		q2 = 0;
		while (q2 < (23 - (x - xc)))
		{
			u *= 2;
			q2++;
		}
		q2 = 0;
		while (q2 < (23 - (x1)))
		{
			u1 *= 2;
			q2++;
		}
		q2 = 0;
		while (q2 < (23 - (x2)))
		{
			u2 *= 2;
			q2++;
		}
		q2 = 0;
		while (q2 < (23 - (x3)))
		{
			u3 *= 2;
			q2++;
		}
		if (res->l1 == 0 && res->l2 == 0 && res->l3 == 0)
		{
			u = res->l4;
			u1 = 0;
			u2 = 0;
			u3 = 0;
		}
		else if (res->l1 == 0 && res->l2 == 0)
		{
			u = res->l3;
			u1 = res->l4;
			u2 = 0;
			u3 = 0;
		}
		else if (res->l1 == 0)
		{
			u = res->l2;
			u1 = res->l3;
			u2 = res->l4;
			u3 = 0;
		}
		ft_cont_binary(u);
		ft_putchar('\n');
		ft_cont_binary(u1);
		ft_putchar('\n');
		ft_cont_binary(u2);
		ft_putchar('\n');
		ft_cont_binary(u3);
		ft_putchar('\n');
		ft_putchar('\n');
		if ((tab[k] & u) != 0 || (tab[k + 1] & u1) != 0 || (tab[k + 2] & u2) != 0 || (tab[k + 3] & u3) != 0)
		{
			while ((tab[k] & u) != 0 || (tab[k + 1] & u1) != 0 || (tab[k + 2] & u2) != 0 || (tab[k + 3] & u3) != 0)
			{
				u /= 2;
				u1 /= 2;
				u2 /= 2;
				u3 /= 2;
			}
		}
		if ((tab[k] & u) == 0 || (tab[k + 1] & u1) == 0 || (tab[k + 2] & u2) == 0 || (tab[k + 3] & u3) == 0)
		{
			tab[k] = tab[k] ^ u;
			tab[k + 1] = tab[k + 1] ^ u1;
			tab[k + 2] = tab[k + 2] ^ u2;
			tab[k + 3] = tab[k + 3] ^ u3;
		}
		i++;
	}
}

int			main(int ac, char **av)
{
	int		fd;

	fd = 0;
	if (ac < 2)
		return (write(2, "fillite: nike ta maman batard.sh\n", 35));
	else if (ac > 2)
		return (write(2, "Too many folder\n", 20));
	else
	{
		fd = open(av[1], O_RDONLY);
		ft_disp(fd, av[1]);
		close(fd);
	}
	return (0);
}