#include "ft_list.h"
#include <stdlib.h>

void ft_free_struct(t_list **list, void (*free_fct)(void *))
{
    (*free_fct)((*list)->data);
    (*list)->data = NULL;
    free(*list);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list  *cur;
    t_list  *prev;
    t_list  *head;

    cur = *begin_list;
    head = cur->next;
    prev = NULL;
    while (cur)
    {
        if (!(*cmp)(cur->data, data_ref))
        {
            if (!prev)
                *begin_list = head;
            else
                prev->next = head;
            ft_free_struct(&cur, free_fct);
        }
        else if (!prev)
            prev = *begin_list;
        else
            prev = cur;
        cur = head;
        if (head)
            head = head->next;
    }
}
