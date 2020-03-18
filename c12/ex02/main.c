#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int     ft_list_size(t_list *begin_list);

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *tmp;

    tmp = malloc(sizeof(t_list));
    tmp->data = data;
    tmp->next = *begin_list;
    *begin_list = tmp;
}

void    freeAll(t_list *current)
{
    t_list *previous;

    if (!current)
        return ;
    previous = current;
    current = current->next;
    free(previous);
    freeAll(current);
}

int     main(int argc, char **argv)
{
    t_list  *list;

    list = NULL;
    if (argc < 2)
    {
        printf("Usage: ft_list_size 'member1' 'member2' 'member3' ...");
        return (0);
    }
    for (int i = 1; i < argc; i++)
        ft_list_push_front(&list, argv[i]);
    printf("%d", ft_list_size(list));
    freeAll(list);
    return (0);
}
