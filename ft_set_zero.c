/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 10:50:35 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/19 13:19:02 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_set_zero(unsigned char **str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		(*str)[i] = 0;
		i++;
	}
}
