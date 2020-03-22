#include "ft_list.h"
#define NULL ((void*)0)

int     g_begin_list_size;

t_list  *ft_list_last(t_list *begin_list)
{
    if (!begin_list || !begin_list->next)
        return (begin_list);
    return (ft_list_last(begin_list->next));
}

int     ft_list_size(t_list *list)
{
    return (list ? (1 + ft_list_size(list->next)) : 0);
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    if (!begin_list)
        return NULL;
    if (!nbr)
        return (begin_list);
    return (ft_list_at(begin_list->next, nbr - 1));
}

void    ft_reverse_fun(t_list *begin_list, t_list *end_list)
{
    void    *tmp;
    int     size;

    size = ft_list_size(begin_list);
    if (size <= (g_begin_list_size / 2))
        return ;
    tmp = (*begin_list).data;
    (*begin_list).data = (*end_list).data;
    (*end_list).data = tmp;
    ft_reverse_fun(
        begin_list->next,
        ft_list_at(begin_list,size - (g_begin_list_size - size) - 2)
    );
}

void    ft_list_reverse_fun(t_list *begin_list)
{
    t_list *end_list;

    g_begin_list_size = ft_list_size(begin_list);
    end_list = ft_list_last(begin_list);
    ft_reverse_fun(begin_list, end_list);
}
