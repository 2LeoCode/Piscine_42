#include <stdio.h>
#include <stdlib.h>

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

void    ft_switch_point(char **a, char **b)
{
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_sort_string_tab(int ac, char **av)
{
    int i;

    if (!ac)
        return ;
    i = 0;
    while (++i < ac)
        if (ft_strcmp(*av, av[i]) > 0)
            ft_switch_point(av, &av[i]);
    ft_sort_string_tab(ac - 1, av + 1);
}

int     main(int argc, char **argv)
{
    char **tab;
    int i;
    
    i = 0;
    if (argc < 2)
    {
        printf("Usage: ft_list_sort 'arg1' 'arg2' 'arg3' ...");
        return (0);
    }
    if (!(tab = malloc(sizeof(char*) * (argc - 1))))
        return (-1);
    while (++i < argc)
        tab[i - 1] = argv[i];
    i = 0;
    ft_sort_string_tab(argc - 1, tab);
    while (++i < argc)
        printf("%s", tab[i - 1]);
    return (0);
}
