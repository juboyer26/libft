# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juboyer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 09:31:34 by juboyer           #+#    #+#              #
#    Updated: 2019/05/30 12:32:04 by juboyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = *.c
OBJ = *.o
INCL = libft.h
all: $(NAME)
$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	 rm -f $(NAME)
re: fclean all

