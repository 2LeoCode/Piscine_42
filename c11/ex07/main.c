#include <stdio.h>
#include <stdlib.h>

void    ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || (*s1 != *s2))
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     ft_is_sort(char **tab, int(*f)(char*, char*))
{
    if (tab[1] == NULL)
        return (1);
    if ((*f)(*tab, tab[1]) > 0)
        return (0);
    return (ft_is_sort(tab + 1, f));
}

int     ft_strlen(char *str)
{
    return (*str ? (1 + ft_strlen(str + 1)) : 0); 
}

int     main(int argc, char **argv)
{
    char    **tab;
    int     i;

    if (argc < 2)
    {
        printf("Usage: ft_sort_string_tab 'string1' 'string2' 'string3' ...");
        return (0);
    }
    i = 0;
    tab = malloc(sizeof(char*) * (argc + 1));
    while (i < argc - 1)
    {
        tab[i] = argv[i + 1];
        i++;
    }
    tab[i] = NULL;
    ft_advanced_sort_string_tab(tab, &ft_strcmp);
    printf("%d", ft_is_sort(tab, &ft_strcmp));
}
