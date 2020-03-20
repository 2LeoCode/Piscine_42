#include "ft_list.h"
#define NULL ((void*)0)

int     ft_list_size(t_list *begin_list)
{
    return (begin_list ? (1 + ft_list_size(begin_list->next)) : 0);
}

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    if (!begin_list)
        return NULL;
    if (!nbr)
        return (begin_list);
    return (ft_list_at(begin_list->next, nbr - 1));
}

void    ft_list_reverse(t_list **begin_list)
{
    t_list *head;
    
    if (!(head = ft_list_at(*begin_list, 1)))
        return ;
    ft_rev(begin_list, &head);
    *begin_list = head;
}
