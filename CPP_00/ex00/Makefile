# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 11:12:54 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/07 11:24:31 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
