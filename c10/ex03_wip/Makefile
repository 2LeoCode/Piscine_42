NAME	= ft_hexdump
SRCS	= srcs/main.c srcs/file.c srcs/hexdump.c srcs/tools.c
OBJ		= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror

all: ${OBJ}
	gcc ${CFLAGS} -o ${NAME} $^

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@ -I includes

re: fclean all

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}
