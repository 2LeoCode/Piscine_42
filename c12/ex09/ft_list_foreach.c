#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *ptr_list;
    
    ptr_list = begin_list;
    while (ptr_list)
    {
        (*f)(ptr_list->data);
        ptr_list = ptr_list->next;
    }
}
