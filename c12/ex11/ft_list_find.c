#include "ft_list.h"
#define NULL ((void*)0)

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    if (!begin_list)
        return NULL;
    if (!(*cmp)(begin_list->data, data_ref))
        return (begin_list);
    return (ft_list_find(begin_list->next, data_ref, cmp));
}
