# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juboyer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 09:31:34 by juboyer           #+#    #+#              #
#    Updated: 2019/05/27 11:49:56 by juboyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
ARC = ar rc
SRC = *.c
OBJ = *.o

# all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(ARC) $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
