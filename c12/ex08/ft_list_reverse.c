#include "ft_list.h"
#define NULL ((void*)0)

void    ft_list_reverse(t_list **begin_list)
{
    t_list *current;
    t_list *head;

    if (!(current = (*begin_list)->next))
        return ;
    head = current->next;
    current->next = *begin_list;
    (*begin_list)->next = NULL;
    *begin_list = current;
    while (head)
    {
        current = head;
        head = head->next;
        current->next = *begin_list;
        *begin_list = current;
    }
}
