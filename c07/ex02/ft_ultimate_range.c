#include <stdlib.h>

void    ft_putnumbers(int *tab, int i, int max)
{
    if (i == max)
        return ;
    *tab = i;
    ft_putnumbers(tab + 1, i + 1, max);
}

int     ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int size;

    size = sizeof(int) * (max - min);
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    if (!(tab = malloc(size)))
        return (-1);
    ft_putnumbers(tab, min, max);
    *range = tab;
    return (size);
}
