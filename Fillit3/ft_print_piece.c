/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:00:32 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/26 18:02:13 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

void	ft_print_piece(struct t_piece a)
{
	ft_print_binary(a.l1, 1);
	ft_print_binary(a.l2, 1);
	ft_print_binary(a.l3, 1);
	ft_print_binary(a.l4, 1);
}
