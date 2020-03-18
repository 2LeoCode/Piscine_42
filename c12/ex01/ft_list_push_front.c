#include <stdlib.h>
#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *tmp;

    if (!(tmp = malloc(sizeof(t_list))))
        return ;
    tmp->data = data;
    tmp->next = *begin_list;
    *begin_list = tmp;
}
