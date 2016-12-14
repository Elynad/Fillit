/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 01:02:01 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/14 01:02:02 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_fillit.h"

int				main(int argc, char **argv)
{
	char		*s;
	size_t		nbr;
	size_t		size;
	t_tetri		**tetris;
	t_square	square;

	s = NULL;
	tetris = NULL;
	if (argc != 2
		|| !(size = ft_read(argv[1], &s))
		|| !(nbr = ft_read_content(s, size))
		|| !(tetris = (t_tetri**)malloc(sizeof(t_tetri*) * nbr))
		|| !(ft_get_tetris(s, nbr, tetris)))
	{
		free(s);
		free(tetris);
		write(1, "error\n", 6);
		return (0);
	}
	ft_init_square(&square, nbr, tetris);
	ft_solve(&square, nbr, tetris);
	ft_print_solution(&square, nbr, tetris);
	free(s);
	ft_destroy_tetris(nbr, tetris);
	return (0);
}
