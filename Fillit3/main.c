/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:10:19 by niludwig          #+#    #+#             */
/*   Updated: 2016/11/26 20:52:27 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void		ft_disp(int fd, char *s, unsigned int *grid)
{
	int i;
	char	buffer[BUFF_SIZE];
	char	*new;
	int q;
	t_piece *res;
	int i2;
	int q2;
	int b;

	i = 0;
	q = 0;
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
	if (ft_pars1g(new) == 0)
	{
		ft_putchar('e');
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
		grid[i - 1] = (unsigned int)res->l1;// getion de la variable i qui casse les burne!
		grid[i] = (unsigned int)res->l2;
		grid[i + 1] = (unsigned int)res->l3;
		grid[i + 2] = (unsigned int)res->l4;
		q2 = 0;
		if (res->l1 == 0 && res->l2 == 0 && res->l3 == 0)
		{
			grid[i - 1] = res->l4;
			grid[i] = 0;
			grid[i + 1] = 0;
			grid[i + 2] = 0;
		}
		else if (res->l1 == 0 && res->l2 == 0)
		{
			grid[i - 1] = res->l3;
			grid[i] = res->l4;
			grid[i + 1] = 0;
			grid[i + 2] = 0;
		}
		else if (res->l1 == 0)
		{
			grid[i - 1] = res->l2;
			grid[i] = res->l3;
			grid[i + 1] = res->l4;
			grid[i + 2] = 0;
		}
		while (q2 < 23)
		{
			grid[i - 1] *= 2;
			q2++;
		}
		q2 = 0;
		while (q2 < 23)
		{
			grid[i] *= 2;
			q2++;
		}
		q2 = 0;
		while (q2 < 23)
		{
			grid[i + 1] *= 2;
			q2++;
		}
		q2 = 0;
		while (q2 < 23)
		{
			grid[i + 2] *= 2;
			q2++;
		}
		ft_check_and_replace(grid, res, i);//le fair deplacer a droite et en bas a fair!
//		deplacement droite / deplacement
		i++;
	}
	ft_cont_binary(grid[0]);//resultat hazardeux
	ft_putchar('\n');
	ft_cont_binary(grid[1]);
	ft_putchar('\n');
	ft_cont_binary(grid[2]);
	ft_putchar('\n');
	ft_cont_binary(grid[3]);
	ft_putchar('\n');
}


int			main(int ac, char **av)
{
	int		fd;
	unsigned int *grid;
	int i;

	i = 0;
	fd = 0;
	grid = (unsigned int *)malloc(sizeof(unsigned int) * 21);
	while (i <= 21)
	{
		grid[i] = 0;
		i++;
	}
	if (ac < 2)
		return (write(2, "fillite: nike ta maman batard.sh\n", 35));
	else if (ac > 2)
		return (write(2, "Too many folder\n", 20));
	else
	{
		fd = open(av[1], O_RDONLY);
		ft_disp(fd, av[1], grid);
		close(fd);
	}
	return (0);
}
