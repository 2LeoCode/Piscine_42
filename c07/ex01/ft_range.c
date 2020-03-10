#include <stdlib.h>

void    ft_putnumbers(int *tab, int i, int max)
{
    if (i == max)
        return ;
    *tab = i;
    ft_putnumbers(tab + 1, i + 1, max);
}

int     *ft_range(int min, int max)
{
    int *tab;

    if (min >= max)
        return (NULL);
    if (!(tab = malloc(sizeof(int) * (max - min))))
        return (NULL);
    ft_putnumbers(tab, min, max);
    return (tab);
}
