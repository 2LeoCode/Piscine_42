#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

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

t_list  *ft_create_elem(void *data)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    new->data = data;
    new->next = NULL;
    return (new);
}

void    ft_list_push_back(t_list **list, void *data)
{
    if (!*list)
        *list = ft_create_elem(data);
    else if (!(*list)->next)
        (*list)->next = ft_create_elem(data);
    else
        ft_list_push_back(&(*list)->next, data);
}

void    ft_display_list(t_list *list)
{
    if (!list)
        return ;
    printf("%s", list->data);
    ft_display_list(list->next);
}

int     main(int argc, char **argv)
{
    int i;
    t_list *sorted;
    t_list *sorted_to_merge;

    i = 0;
    if (argc < 2)
        return (0);
    while (++i < argc)
    {
        if (!ft_strcmp(argv[i], "-m"))
            break;
        ft_list_push_back(&sorted, argv[i]);
    }
    while (++i < argc)
        ft_list_push_back(&sorted_to_merge, argv[i]);
    ft_sorted_list_merge(&sorted, sorted_to_merge, &ft_listcmp);
    ft_display_list(sorted);
    return (0);
}
