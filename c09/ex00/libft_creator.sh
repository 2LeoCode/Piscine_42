gcc -Wall -Wextra -Werror -c srcs/tools.c
ar r libft.a tools.o
ranlib libft.a
rm -f tools.o
