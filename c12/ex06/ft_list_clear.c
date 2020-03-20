#include "ft_list.h"
#include <stdlib.h>

void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *tmp;

    if (begin_list == NULL)
        return ;
    tmp = begin_list->next;
    (*free_fct)(begin_list->data);
    free(begin_list);
    ft_list_clear (tmp, free_fct);
}
