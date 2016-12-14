/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 01:02:23 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/14 01:02:26 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H

# define MAX_FILE_SIZE 545
# define GRID_SIZE 22

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_block
{
	size_t	x;
	size_t	y;
}				t_block;

typedef struct	s_box
{
	unsigned char	l1 : 4;
	unsigned char	l2 : 4;
	unsigned char	l3 : 4;
	unsigned char	l4 : 4;
}				t_box;

typedef struct	s_tetri
{
	t_box			box;
	size_t			x;
	size_t			y;
	struct s_tetri	*prev;
	size_t			width;
	size_t			height;
	t_block			blocks[4];
}				t_tetri;

typedef struct	s_square
{
	unsigned int	grid[GRID_SIZE];
	size_t			size;
}				t_square;

size_t			ft_read(char *path, char **content);
size_t			ft_read_content(char *content, size_t size);
size_t			ft_get_tetris(char *content, size_t count, t_tetri **tetris);
void			ft_init_square(t_square *square, size_t count,
							t_tetri **tetris);
int				ft_finded(t_square *square, t_tetri *tetri);
void			ft_not_finded(t_square *rsquare, t_tetri *tetri);
int				ft_move_up(t_square *square, t_tetri *tetri);
void			ft_solve(t_square *square, size_t count,
							t_tetri **tetris);
void			ft_print_solution(t_square *square, size_t count,
									t_tetri **tetris);
void			ft_destroy_tetris(size_t count, t_tetri **tetris);

#endif
