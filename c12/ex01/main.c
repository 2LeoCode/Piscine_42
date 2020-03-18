#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data);

void    ft_display_list(t_list *list)
{
    if (!list)
        return ;
    ft_display_list(list->next);
    printf("%s", (char*)list->data);
}

int     main(int argc, char **argv)
{
    int i;
    t_list *list;

    list = NULL;
    if (argc < 2)
    {
        printf("Usage: ft_list_push_front 'elem1' 'elem2' 'elem3' ...");
        return (0);
    }
    i = 0;
    while (++i < argc)
        ft_list_push_front(&list, argv[i]);
    ft_display_list(list);
    return (0);
}