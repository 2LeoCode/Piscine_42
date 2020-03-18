#define NULL ((void*)0)

void    ft_switchpoint(char **a, char **b)
{
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_smallest(char **tab, char **current, int(*f)(char *, char *))
{
    if (*tab == NULL)
        return ;
    if ((*f)(*current, *tab) > 0)
        ft_switchpoint(current, tab);
    return (ft_smallest(tab + 1, current, f));
}

void    ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
    if (tab[1] == NULL)
        return ;
    ft_smallest(tab + 1, tab, cmp);
    ft_advanced_sort_string_tab(tab + 1, cmp);
}
