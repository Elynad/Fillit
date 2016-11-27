/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_z.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:15:16 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/25 17:31:52 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

/*
**	Fonction qui met tous les tetriminos en haut a gauche de leur struct
**	Ne fonctionne pas
*/

void	ft_parsing_z(struct t_piece *pieces, int nbr_pieces)
{
	int		i;

	while (i < nbr_pieces)
	{
		ft_set_up_left(&pieces[i]);
		i++;
	}
}
