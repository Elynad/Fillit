/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 01:01:22 by niludwig          #+#    #+#             */
/*   Updated: 2016/12/14 01:01:23 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static int		ft_check_char(char *content, size_t offset, size_t col)
{
	if ((col < 4 && content[offset] != '#' && content[offset] != '.')
		|| (col == 4 && content[offset] != '\n'))
		return (0);
	return (1);
}

static size_t	ft_count_nei(char *content, size_t i, size_t x, size_t y)
{
	size_t	neighbors;

	neighbors = 0;
	neighbors += (x > 0 && content[i - 1] == '#') ? 1 : 0;
	neighbors += (x < 3 && content[i + 1] == '#') ? 1 : 0;
	neighbors += (y > 0 && content[i - 5] == '#') ? 1 : 0;
	neighbors += (y < 3 && content[i + 5] == '#') ? 1 : 0;
	return (neighbors);
}

static int		ft_read_tetri(char *content, size_t offset)
{
	size_t	nbr_line;
	size_t	nbr_blocks;
	size_t	nbr;
	size_t	u;

	u = 0;
	nbr_line = 0;
	nbr_blocks = 0;
	nbr = 0;
	while (u < 5 && nbr_line < 4)
	{
		if (!(ft_check_char(content, offset, u)))
			return (0);
		if (content[offset] == '#' && ++nbr_blocks)
			nbr += ft_count_nei(content, offset, u, nbr_line);
		offset++;
		if (++u == 5)
		{
			u = 0;
			nbr_line++;
		}
	}
	if (nbr_blocks != 4 || nbr < 6)
		return (0);
	return (1);
}

size_t			ft_read_content(char *content, size_t size)
{
	size_t	offset;

	offset = 0;
	while (offset < size)
	{
		if (!(ft_read_tetri(content, offset)))
			return (0);
		offset += 20;
		if (content[offset] != '\n' && offset != size)
			return (0);
		offset++;
	}
	return (size / 21 + 1);
}

size_t			ft_read(char *path, char **content)
{
	int		fd;
	size_t	size;

	if (!(*content = (char *)malloc(sizeof(char) * (MAX_FILE_SIZE + 1))))
		return (0);
	if (!(fd = open(path, O_RDONLY)))
		return (0);
	if (MAX_FILE_SIZE == (size = read(fd, *content, MAX_FILE_SIZE))
		&& read(fd, *content + size, 1))
		return (0);
	close(fd);
	if (size % 21 != 20)
		return (0);
	return (size);
}
