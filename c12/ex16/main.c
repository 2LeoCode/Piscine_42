#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     ft_listcmp(void *data1, void *data2)
{
    return (ft_strcmp((char*)data1, (char*)data2));
}

void    ft_list_push_back(t_list **begin_list, void *data)
{
    if (!*begin_list)
    {
        *begin_list = ft_create_elem(data);
        return ;
    }
    ft_list_push_back(&(*begin_list)->next, data);
}

void    ft_display_list(t_list *list)
{
    if (!list)
        return ;
    printf("%s", (char*)list->data);
    ft_display_list(list->next);
}

int     main(int argc, char **argv)
{
    int     i;
    void    *to_insert;
    t_list  *test;

    i = 0;
    test = NULL;
    to_insert = NULL;
    if (argc < 2)
        return (0);
    while (++i < argc)
        if (!ft_strcmp(argv[i], "-i"))
            if (++i < argc)
                to_insert = argv[i];
            else
                return (0);
        else
            ft_list_push_back(&test, argv[i]);
    if (!to_insert)
        return (0);
    ft_sorted_list_insert(&test, to_insert, &ft_listcmp);
    ft_display_list(test);
}