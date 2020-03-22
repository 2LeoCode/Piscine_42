#include "ft_list.h"

void ft_list_sort_merge(t_list **l1, t_list *l2, int (*cmp)())
{
    t_list *tmp;

    if (!l2)
        return ;
    tmp = l2->next;
    if (!(*l1)->next)
    {
        (*l1)->next = l2;
        return ;
    }
    if ((*cmp)((*l1)->next->data, l2->data) > 0)
    {
        l2->next = (*l1)->next;
        (*l1)->next = l2;
    }
    else
    {
        ft_list_sort_merge(&(*l1)->next, l2, cmp);
        return ;
    }
    ft_list_sort_merge(&(*l1)->next, tmp, cmp);
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *tmp;

    tmp = begin_list2;
    if ((*cmp)((*begin_list1)->data, begin_list2->data) > 0)
    {
        tmp = tmp->next;
        begin_list2->next = *begin_list1;
        *begin_list1 = begin_list2;
    }
    ft_list_sort_merge(begin_list1, tmp, cmp);
}
