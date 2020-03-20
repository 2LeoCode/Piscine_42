#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_list_last(t_list *begin_list);

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *tmp;

    if (!(tmp = malloc(sizeof(t_list))))
        return ;
    tmp->data = data;
    tmp->next = *begin_list;
    *begin_list = tmp;
}

void    freeAll(t_list *list)
{
    t_list *head;

    if (!list)
        return ;
    head = list->next;
    free(list);
    freeAll(head);
}

int     main(int argc, char **argv)
{
    t_list *test;

    if (argc < 2)
    {
        printf("Usage: ft_list_last 'param1' 'param2' 'param3' ...");
        return (0);
    }
    while (--argc)
        ft_list_push_front(&test, argv[argc]);
    printf("%s", (char*)ft_list_last(test)->data);
    freeAll(test);
    return(0);
}
