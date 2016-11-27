/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:34:58 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 17:58:52 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_print_piece(piece a)
{
	ft_print_binary(a.l1);
	ft_print_binary(a.l2);
	ft_print_binary(a.l3);
	ft_print_binary(a.l4);
	ft_putchar('\n');
}
