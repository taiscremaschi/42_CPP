# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 12:19:02 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/25 12:19:37 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
RM		= rm -f
SRCS	= main.cpp replace.cpp 

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all