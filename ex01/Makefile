# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 16:48:26 by araqioui          #+#    #+#              #
#    Updated: 2023/09/25 16:48:43 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
HEADER = iter.hpp

SRC = main \

OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re