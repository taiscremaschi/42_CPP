# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 14:11:18 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/23 14:12:55 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
SRCS	= newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all