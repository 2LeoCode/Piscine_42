#include <stdlib.h>

int     ft_rbase(char *str, char *base, long size);
int     ft_pos(char c, char *base);
int     ft_checkbase(char *str);
int     ft_size(int nb, int base_size);
int     ft_isspace(char c);

int     ft_atoi_base(char *str, char *base)
{
    long base_size;
    long neg;

    base_size = (long)ft_checkbase(base);
    neg = 1;
    if (base_size < 2)
        return (0);
    while (ft_isspace(*str))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            neg *= -1;
        str++;
    }
    if (ft_pos(*str, base) == base_size)
        return (0);
    while (ft_pos(str[1], base) != base_size)
        str++;
    return ((long)ft_rbase(str, base, base_size) * neg);
}

void    *ft_putbase(char *str, int nb, char *base, int size)
{
    int i;

    i = 0;
    while (i < ft_size(nb, size))
    {
        str[i] = '0';
        i++;
    }
    str[i] = 0;
    i--;
    while (i >= 0)
    {
        str[i] = base[nb % size];
        nb /= size;
        i--;
    }
}

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    long nb;
    long base_size;
    char *tab;
    int  size;

    if (!(nb = (long)ft_atoi_base(nbr, base_from)))
        return (NULL);
    base_size = ft_checkbase(base_to);
    if (base_size >= 2)
        size = (nb < 0) ? (ft_size(-nb, base_size) + 2) : (ft_size(nb, base_size) + 1);
    if (base_size < 2)
        return (NULL);
    if (!(tab = malloc(sizeof(int) * size)))
        return (NULL);
    if (nb < 0)
    {
        *tab = '-';
        ft_putbase(tab + 1, -nb, base_to, base_size);
    }
    else
        ft_putbase(tab, nb, base_to, base_size);
    return (tab);
}
