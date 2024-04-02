# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 12:06:59 by tbolzan-          #+#    #+#              #
#    Updated: 2024/04/02 12:00:07 by tbolzan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM		= rm -f
SRCS	= PhoneBook.cpp main.cpp Contact.cpp utils.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all