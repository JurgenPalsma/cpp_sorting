CC	= g++ 

CPPFLAGS += -std=c++11 -Wall -Wextra -I. -I./sources/headers

NAME	= sort.out

SRCS	= Sources/cpp/main.cpp \
		sources/cpp/Reader.cpp \
		sources/cpp/SortingTools.cpp


OBJS	= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) -I.

clean:
		rm -rf $(OBJS)

fclean:		clean
		rm $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
