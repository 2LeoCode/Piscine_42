#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     main(int argc, char **argv)
{
    int     i;
    int     j;
    char    **tab;
    char    *to_add;

    if (argc < 2)
        return (0);
    i = 0;
    j = 0;
    tab = malloc(sizeof(char*) * (argc - 2));
    while (++i < argc)
        if (!ft_strcmp(argv[i], "-i"))
            if (++i < argc)
                to_add = argv[i];
            else
                return (0);
        else
            tab[j++] = argv[i];
    i = 0;
    if (!to_add)
        return (0);
    while (i < argc - 3)
    {
        if (to_add)
        {
            if (ft_strcmp(tab[i], to_add) > 0)
            {
                printf("%s%s", to_add, tab[i]);
                to_add = NULL;
            }
            else
                printf("%s", tab[i]);
        }
        else
            printf("%s", tab[i]);
        i++;
    }
    if (to_add)
        printf("%s", to_add);
    return (0);
}
