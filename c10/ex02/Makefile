NAME	= ft_tail
SRCS	= srcs/ft_err.c srcs/ft_tail.c srcs/ft_tools.c
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
