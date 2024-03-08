# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 11:12:54 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/08 09:55:07 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
