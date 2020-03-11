#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define TRUE 1
# define FALSE 0
# define EVEN(x) (x % 2) ? (0) : (1)
# include <unistd.h>

typedef char t_bool;

#endif
