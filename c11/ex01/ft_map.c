#include <stdlib.h>

void ft_foreach(int *ntab, int *tab, int length, int(*f)(int))
{
    if (!length)
        return ;
    *ntab = (*f)(*tab);
    ft_foreach(ntab + 1, tab + 1, length - 1, f);
}

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int *newtab;
    
    newtab = malloc(sizeof(int) * length);
    ft_foreach(newtab, tab, length, f);
    return (newtab);
}
