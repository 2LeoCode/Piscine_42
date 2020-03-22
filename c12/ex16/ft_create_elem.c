#include "ft_list.h"
#include <stdlib.h>

t_list  *ft_create_elem(void *data)
{
    t_list *list;

    if(!(list = malloc(sizeof(t_list))))
        return NULL;
    list->data = data;
    list->next = NULL;
    return (list);
}
