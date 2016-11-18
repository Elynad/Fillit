/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:10:19 by niludwig          #+#    #+#             */
/*   Updated: 2016/11/18 11:21:18 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void		ft_disp(int fd, char *s)
{
	int i;
	char	buffer;
	char	*new;
	int q;

	i = 0;
	q = 0;
	while (read(fd, &buffer, 1))
	{
		i++;
		if (i > 547)
		{
			ft_putstr("error\n");
			return ;
		}
	}
	new = (char *)malloc(sizeof(i + 1));
	close(fd);
	i = 0;
	fd = open(s, O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		new[i] = buffer;
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
			ft_putchar('e');
			return ;
		}
	if (ft_check_tetri(new, q) == 1)
		ft_putchar('Y');
	else
		ft_putchar('N');
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
