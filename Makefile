#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niludwig <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/14 01:02:39 by niludwig          #+#    #+#              #
#    Updated: 2016/12/14 01:02:39 by niludwig         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME= fillit
SRC_PATH= src/
SRC_FILES= main.c \
					 ft_get_tetris.c \
					 ft_read.c \
					 ft_init_square.c \
					 ft_solve.c \
					 ft_print_solution.c \
					 ft_destroy_tetris.c
SRC= $(addprefix $(SRC_PATH),$(SRC_FILES))
OBJ_PATH= obj/
OBJ_FILES= $(SRC_FILES:.c=.o)
OBJ= $(addprefix $(OBJ_PATH),$(OBJ_FILES))
HDR_PATH= include/
HDR_FILES= ft_fillit.h
HDR= $(addprefix $(HDR_PATH),$(HDR_FILES))
CC= gcc
CC_FLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) -o $@ $^

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(HDR)
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CC_FLAGS) -I$(HDR_PATH) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
