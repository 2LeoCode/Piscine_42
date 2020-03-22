#include "ft_list.h"
#define NULL ((void*)0)

void    ft_switch_data(void **data1, void **data2)
{
    void *tmp;

    tmp = *data1;
    *data1 = *data2;
    *data2 = tmp;
}

void    ft_list_foreach_if(t_list **begin_list, void (*f)(void **, void **), t_list **list_ref, int (*cmp)())
{
    if (!*begin_list)
        return ;
    if ((*cmp)((*begin_list)->data, (*list_ref)->data) < 0)
        (*f)(&(*begin_list)->data, &(*list_ref)->data);
    ft_list_foreach_if(&(*begin_list)->next, f, list_ref, cmp);
}

void    ft_list_sort(t_list **begin_list, int (*cmp)())
{
    if (!*begin_list)
        return ;
    ft_list_foreach_if(&(*begin_list)->next, &ft_switch_data, begin_list, cmp);
    ft_list_sort(&(*begin_list)->next, cmp);
}
