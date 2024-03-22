# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 12:06:59 by tbolzan-          #+#    #+#              #
#    Updated: 2024/03/22 11:03:01 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
SRCS	= PhoneBook.cpp main.cpp Contact.cpp utils.cpp

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
