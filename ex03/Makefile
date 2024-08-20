# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 18:22:25 by akovalev          #+#    #+#              #
#    Updated: 2024/08/20 19:24:50 by akovalev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := UnnecessaryViolence
CFLAGS := -Wall -Wextra -Werror
SRC := main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re