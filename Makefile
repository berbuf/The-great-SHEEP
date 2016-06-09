CC =	cc

RM = rm -rf

CPPFLAGS =	`sdl2-config --cflags` -W -Wall -Wextra -Iinclude/

LDFLAGS =	`sdl2-config --libs`

NAME =		The-great-SHEEP

SRC =		source/main.cpp

OBJ =		$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
