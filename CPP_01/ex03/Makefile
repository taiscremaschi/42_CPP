# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 19:28:18 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/23 19:43:28 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violence
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
RM		= rm -f
SRCS	= main.cpp, HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all