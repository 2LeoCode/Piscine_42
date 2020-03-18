#include <stdio.h>
#include <stdlib.h>
#define ABS(x) ((x > 0) ? x : -x)

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int ft_cmp(int a, int b)
{
    if (a < b)
        return (-1);
    if (a > b)
        return (1);
    return(0);
}

int main(int argc, char **argv)
{
    int *tab;
    int i;

    i = 1;
    tab = malloc(sizeof(int) * (argc - 1));
    if (argc < 2)
    {
        printf("Usage: ft_is_sort 'nb1' 'nb2' 'nb3' ...");
        return (0);
    }
    while (i < argc)
    {
        tab[i - 1] = atoi(argv[i]);
        i++;
    }
    printf("%d", ft_is_sort(tab, argc - 1, &ft_cmp));
    free(tab);
    return (0);
}
