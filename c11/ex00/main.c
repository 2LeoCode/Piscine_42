#include <stdio.h>

void    ft_foreach(int *tab, int length, void(*f)(int));

void    ft_display(int nb)
{
    printf("[%d]", nb);
}

int     main(int argc, char **argv)
{
    int tab[5] = {1, 2, 3, 4, 5};
    ft_foreach(tab, 5, &ft_display);
    return (0);
}
