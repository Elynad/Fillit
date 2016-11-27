/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:35:42 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/26 18:01:15 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct			t_piece
{
	unsigned int		l1;
	unsigned int		l2;
	unsigned int		l3;
	unsigned int		l4;
	unsigned int		index;
}						s_piece;

void					ft_print_binary(unsigned int i, int index);
void					ft_print_piece(struct t_piece a);
void					ft_print_grid(unsigned int *grid);
unsigned int			*ft_algo(unsigned int *grid, \
						struct t_piece *pieces, int nbr_pieces);
int						ft_sqrt(int nbr);
int						ft_is_empty(unsigned int *grid, \
						struct t_piece *pieces, int index);
void					ft_replace(unsigned int *grid, \
						struct t_piece *pieces, int index);
void					ft_check_and_replace(unsigned int *grid, \
						struct t_piece *pieces, int index);
void					ft_shift_left(struct t_piece *a);
void					ft_shift_right(struct t_piece *a);
void					ft_shift_up(struct t_piece *a);
void					ft_shift_down(struct t_piece *a);
void					ft_set_up_left(struct t_piece *a);
void					ft_parsing_z(struct t_piece *pieces, int nbr_pieces);

#endif
