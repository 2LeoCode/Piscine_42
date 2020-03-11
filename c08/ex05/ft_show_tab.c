#include <unistd.h>
#include "ft_stock_str.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    write(1, str, 1);
    ft_putstr(str + 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -(long)nb;
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

void    ft_put_strs(struct s_stock_str par)
{
    ft_putstr(par.str);
    ft_putchar('\n');
    ft_putnbr(par.size);
    ft_putchar('\n');
    ft_putstr(par.copy);
}

void    ft_show_tab(struct s_stock_str *par)
{
    if (!(par + 1)->str)
    {
        ft_put_strs(*par);
        return ;
    }
    ft_put_strs(*par);
    ft_putchar('\n');
    ft_show_tab(par + 1);
}
