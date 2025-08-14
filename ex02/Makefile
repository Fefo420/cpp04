# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 22:13:27 by fefo              #+#    #+#              #
#    Updated: 2025/08/14 18:34:56 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract Class

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		Brain.cpp

HEADERS = Animal.hpp \
			Dog.hpp \
			Cat.hpp \
			Brain.hpp

LIB = -I .
 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIB) -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re