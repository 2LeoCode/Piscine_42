#include <operations.h>
#include <stdio.h>

void    ft_add(t_llong a, t_llong b)
{
    ft_putnbr(a + b);
}

void    ft_sub(t_llong a, t_llong b)
{
    ft_putnbr(a - b);
}

void    ft_mul(t_llong a, t_llong b)
{
    ft_putnbr(a * b);
}

void    ft_div(t_llong a, t_llong b)
{
    if (!b)
        ft_putstr("Stop : division by zero");
    else
        ft_putnbr(a / b);
}

void    ft_mod(t_llong a, t_llong b)
{
    if (!b)
        ft_putstr("Stop : modulo by zero");
    else
        ft_putnbr(a % b);
}
