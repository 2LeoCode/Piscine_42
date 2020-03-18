#ifndef OPERATIONS_H

# define OPERATIONS_H
# include <unistd.h>

typedef long long t_llong;

void        *do_op(char *operator);
void        ft_putnbr(t_llong nb);
t_llong     ft_atoi(char *str);
int         ft_isspace(char c);
void        ft_putchar(char c);
int         ft_strlen(char *str);
void        ft_putstr(char *str);
void        ft_add(t_llong a, t_llong b);
void        ft_sub(t_llong a, t_llong b);
void        ft_mul(t_llong a, t_llong b);
void        ft_div(t_llong a, t_llong b);
void        ft_mod(t_llong a, t_llong b);

#endif
