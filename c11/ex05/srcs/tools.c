#include <operations.h>

int         ft_isspace(char c)
{
    if (c == '\t' || c == '\n' || c == '\v')
        return (1);
    if (c == '\f' || c == '\r' || c == ' ')
        return (1);
    return (0);
}

t_llong     ft_atoi(char *str)
{
    t_llong nb;
    t_llong neg;

    nb = 0;
    neg = 1;
    while (ft_isspace(*str))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            neg *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        nb *= 10;
        nb += *str - 48;
        str++;
    }
    return (nb * neg);
}

void    ft_putnbr(t_llong nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
