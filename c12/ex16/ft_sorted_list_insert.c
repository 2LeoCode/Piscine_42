#include "ft_list.h"

void ft_insert(t_list **begin, t_list *elem, int (*f)())
{
    t_list *head;

    if (!(*begin)->next || (*f)((*begin)->next->data, elem->data) > 0)
    {
        head = (*begin)->next;
        (*begin)->next = elem;
        elem->next = head;
        return ;
    }
    ft_insert(&(*begin)->next, elem, f);
}

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *new;
    
    new = ft_create_elem(data);
    if (!*begin_list || (*cmp)((*begin_list)->data, new->data) > 0)
    {
        new->next = *begin_list;
        *begin_list = new;
        return ;
    }
    ft_insert(begin_list, new, cmp);
}
