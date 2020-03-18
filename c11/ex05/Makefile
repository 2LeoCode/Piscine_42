NAME = do-op
TESTSCRIPT = srcs/test.sh
SRCS = srcs/main.c srcs/tools.c srcs/operations.c
OBJ = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all: ${OBJ}
	gcc ${CFLAGS} -o ${NAME} $^

%.o: %.c
	gcc ${CFLAGS} -o $@ -c $< -I includes

re: all clean

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

test:
	sh ${TESTSCRIPT}