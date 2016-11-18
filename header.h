/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:22:15 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 17:58:34 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

typedef struct				piece
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	l3;
	unsigned int	l4;
}							piece;

char	*ft_print_binary(unsigned long int i);
piece	ft_shift_left(piece a);
piece	ft_shift_right(piece a);
piece	ft_shift_up(piece a);
piece	ft_shift_down(piece a);
void	ft_print_grid(unsigned long int *grid);
void	ft_print_piece(piece a);
int		ft_check_emptyness(piece grid, piece a);
piece	ft_replace(piece grid, piece a);

#endif
