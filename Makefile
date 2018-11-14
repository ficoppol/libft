# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/14 19:45:27 by ficoppol          #+#    #+#              #
#    Updated: 2018/11/14 19:50:04 by ficoppol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/*.c

LIB = includes/libft.h

OFI = *.o

all: $(NAME)

$(NAME): $(OFI)
	ar rc $(NAME) $(OFI)

$(OFI):
	gcc -c -Wall -Wextra -Werror $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
