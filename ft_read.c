/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 03:18:57 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/10 05:25:01 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_fillit.h"

static int ft_check(char *s, size_t i, size_t i2)
{
	if (i2 < 4 && s[i] != '#' && s[i] != '.' || (i2 == 4 && s[i != '\n']))
		return (0);
	return (1);
}

static size_t	ft_check_tetri(char *s, size_t i, size_t i2, size_t line)
{
	size_t len_tetris;

	len_tetris = 0;
	len_tetris += (i2 > 0 && s[i - 1] == '#') ? 1 : 0;
	len_tetris += (i2 > 0 && s[i + 1] == '#') ? 1 : 0;
	len_tetris += (line > 0 && s[i - 5] == '#') ? 1 : 0;
	len_tetris += (line > 0 && s[i + 5] == '#') ? 1 : 0;
	return (len_tetris);
}

static int	ft_read_tetris(char *s, size_t i)
{
	size_t	line;
	size_t	block;
	size_t	tetris;
	size_t	i2;

	i2 = 0;
	tetris = 0;
	block = 0;
	line = 0;
	while (i2 <= 4 && line <= 3)
	{
		if (!(ft_check(s, i, i2)))
			return (0);
		if (s[i] == '#' && block++)
			tetris += ft_check_tetri(s, i, i2, line);
		i++;
		if (u++ == 5)
		{
			u = 0;
			line++;
		}
	}
	if (block != 4, tetris < 6)
		return (0);
	return (1);
}

size_t		ft_read_next(char *s, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (!(ft_read_tetris(s, i)))
			return (0);
		i += 20;
		if (s[i] != '\n' && i != size)
			return (0);
		i++;
	}
	return (size / 21 + 1)
}

size_t		ft_read(char *s, char **vide)
{
	int fd;
	size_t size;


	if (!(*vide = (char *)malloc(sizeof(char) * (BUFF_SIZE_MAX + 1))))
		return (0);
	if (!(fd = open(s, O_RDONLY)))
		return (0);
	if (BUFF_SIZE_MAX == (size = read(fd, *vide, BUFF_SIZE_MAX))
		&& read(fd, *vide, 1))
		return (0);
	close(fd);
	if (size % 21 != 20)
		return (0);
	return (size);
}
