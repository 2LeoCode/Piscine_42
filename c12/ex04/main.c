#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data);

void    ft_display_list(t_list *list)
{
    if (!list)
        return ;
    ft_display_list(list->next);
    printf("%s", (char*)list->data);
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

    test = NULL;
    if (argc < 2)
    {
        printf("Usage: ft_list_push_back 'param1' 'param2' 'param3' ...");
        return (0);
    }
    while (--argc)
        ft_list_push_back(&test, argv[argc]);
    ft_display_list(test);
    freeAll(test);
    return(0);
}
