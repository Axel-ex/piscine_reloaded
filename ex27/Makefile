NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJ} 
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

all : ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
