NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ		= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror

all: ${NAME}
	ranlib $<

${NAME}: ${OBJ}
	ar rcs $@ ${OBJ}

%.o: %.c
	gcc ${CFLAGS} -c $< -I includes -o $@

re: fclean all

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}
