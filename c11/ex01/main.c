#include <stdio.h>
#include <stdlib.h>

int     *ft_map(int *tab, int length, int(*f)(int));

int     ft_display(int nb)
{
    printf("[%d]", nb);
    return (nb + 5);
}

void    ft_disp(int nb)
{
    printf("[%d]", nb);
}

void ft_freach(int *tab, int length, void(*f)(int))
{
    if (!length)
        return ;
    (*f)(*tab);
    ft_freach(tab + 1, length - 1, f);
}

int     main(int argc, char **argv)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int *test;

    test = ft_map(tab, 5, &ft_display);
    printf("\n");
    ft_freach(test, 5, &ft_disp);
    free(test);
    return (0);
}
