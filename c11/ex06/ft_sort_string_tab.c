#define NULL ((void*)0)

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || (*s1 != *s2))
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

void    ft_switchpoint(char **a, char **b)
{
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_smallest(char **tab, char **current)
{
    if (*tab == NULL)
        return ;
    if (ft_strcmp(*current, *tab) > 0)
        ft_switchpoint(current, tab);
    return (ft_smallest(tab + 1, current));
}

void    ft_sort_string_tab(char **tab)
{
    if (tab[1] == NULL)
        return ;
    ft_smallest(tab + 1, tab);
    ft_sort_string_tab(tab + 1);
}
