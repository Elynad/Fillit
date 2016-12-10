/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 03:10:13 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/10 08:50:56 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_fillit.h"

int			main(int ac, char **av)
{
	char	*s;
	size_t	size;
	size_t	nbr;
	t_piece	**ress;

	s = NULL;
	tetris = NULL;
	if (ac != 2
		|| !(size = ft_read(av[1], &s))
		|| !(nbr = ft_read_next(s, size)
		|| !(tetris = (t_piece **)malloc(sizeof(t_piece*) * nbr))
		|| !(ft_conv_tetris(s, nbr, tetris)))
	{
		free(str);
		free(tetris);
		ft_putendl("error");
		return (0);
	}

	return (0);
}
