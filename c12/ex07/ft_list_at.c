#include "ft_list.h"
#define NULL ((void*)0)

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    if (!begin_list)
        return NULL;
    if (!nbr)
        return (begin_list);
    return (ft_list_at(begin_list->next, nbr - 1));
}
