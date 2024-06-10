
NAME	=  ScalarConverter
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address 
RM		= rm -f
SRCS	= main.cpp ScalarConverter.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all