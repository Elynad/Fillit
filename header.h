/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:22:15 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/19 13:12:39 by mameyer          ###   ########.fr       */
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
piece	ft_set_up_left(piece a);
void	ft_print_grid(unsigned char *grid, int lines);
void	ft_print_piece(piece a);
int		ft_check_emptyness(unsigned char grid, piece a);
piece	ft_replace(piece grid, piece a);
void	ft_set_zero(unsigned char **str);

#endif
