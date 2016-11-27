/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:08:02 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/20 18:43:46 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

#define HEADER_H

#include "libft.h"
#include <stdio.h>

typedef struct		t_piece
{
	unsigned short	l1;
	unsigned short	l2;
	unsigned short	l3;
	unsigned short	l4;
}					s_piece;

void	ft_print_binary(unsigned long int i);
void	ft_print_grid(unsigned short *grid, int size);
void	ft_print_piece(struct t_piece a);
void	ft_shift_up_left(struct t_piece *a);
int		ft_check_emptyness(struct t_piece *a, unsigned short *grid, int index);
void	ft_replace(struct t_piece a, unsigned short *grid, int index);

#endif
