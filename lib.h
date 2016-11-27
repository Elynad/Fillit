/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niludwig <niludwig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:44:07 by niludwig          #+#    #+#             */
/*   Updated: 2016/11/25 00:22:23 by niludwig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_SIZE 1

typedef struct				s_piece
{
	unsigned char			l1;
	unsigned char			l2;
	unsigned char			l3;
	unsigned char			l4;
	int						x;
	int						x1;
	int						x2;
	int						x3;
	int						xc;
	int						y;
}							t_piece;


void						ft_disp(int fd, char *s);
int ft_pars1g(char *s);
int ft_check_long_larg(char *s, int i, int c, int c2);
void ft_check_long(char *s, int i, int c, int c2);
int ft_check_tetri(char *s, int q);
int ft_all(char *s, int q);
t_piece	*ft_con_binary(char *s, int p);
void    ft_cont_binary(int n);
t_piece *ft_corect(t_piece *res);
