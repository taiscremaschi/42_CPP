# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 18:59:28 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/23 19:04:48 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
RM		= rm -f
SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all