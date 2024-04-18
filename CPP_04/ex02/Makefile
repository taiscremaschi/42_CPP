# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 14:32:16 by tbolzan-          #+#    #+#              #
#    Updated: 2024/04/18 19:51:38 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM		= rm -f
SRCS	= main.cpp  Dog.cpp Animal.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all