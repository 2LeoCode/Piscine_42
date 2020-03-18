NAME	= ft_display_file
SRCS	= ft_display_file.c
OBJ		= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror

all: ${OBJ}
	gcc -o ${NAME} $<

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@

re: fclean all

clean: all
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}
