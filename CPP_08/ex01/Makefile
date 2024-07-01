NAME	=  ex01
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
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