#include "ft_list.h"
#include <stdlib.h>

void    ft_list_push_back(t_list **begin_list, void *data)
{
    if (!*begin_list)
    {
        *begin_list = malloc(sizeof(t_list));
        (*begin_list)->data = data;
        (*begin_list)->next = NULL;
        return ;
    }
    ft_list_push_back(&(*begin_list)->next, data);
}
