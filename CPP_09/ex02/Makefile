NAME	=  PmergeMe
CXX	= c++
CXXFLAGS	= -Wall -Wextra -Werror  -g -fsanitize=address #-std=c++98
RM		= rm -f
SRCS	= main.cpp PmergeMe.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all