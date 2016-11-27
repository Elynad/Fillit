/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_delc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:38:13 by mameyer           #+#    #+#             */
/*   Updated: 2016/11/18 13:27:14 by mameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int		ft_grid_size(char **str);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_grid_del(char **str)
{
	char		**res;
	int			lines;
	int			i;

	lines = ft_grid_size(str);
	res = (char **)malloc(sizeof(char *) * (lines - 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < (lines - 1))
	{
		res[i] = (char *)malloc(sizeof(char) * (ft_strlen(str[1]) - 1));
		if (!res[i])
			return (NULL);
		res[i] = strncpy(res[i], str[i], ft_strlen(str[1]) - 1);
		i++;
	}
	res[i] = NULL;
	return (res);
}

int		ft_grid_size(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_grid(char **str)
{
	int		i;

	i = 1;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_grid(argv);
	printf("\n\n");
	ft_print_grid(ft_grid_del(argv));
	return (0);
}
