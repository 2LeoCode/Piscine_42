#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    ft_list_reverse(t_list **begin_list);

int     ft_strlen(char *str)
{
    if (!*str)
        return (0);
    return (1 + ft_strlen(str + 1));
}

void    ft_strcpy(char *dest, char *src)
{
    *dest = *src;
    if (!*src)
        return ;
    ft_strcpy(dest + 1, src + 1);
}

char    *ft_strdup(char *str)
{
    char *tmp;
    if (!(tmp = malloc(sizeof(char) * (ft_strlen(str) + 1))))
        return (NULL);
    ft_strcpy(tmp, str);
    return (tmp);
}

void    ft_display_list(t_list *list)
{
    if (!list)
        return ;
    ft_display_list(list->next);
    printf("%s", (char*)list->data);
}

void    ft_list_push_back(t_list **begin_list, void *data)
{
    if (!*begin_list)
    {
        *begin_list = malloc(sizeof(t_list));
        (*begin_list)->data = data;
        (*begin_list)->next = NULL;
        return ;
    }
    ft_list_push_back(&(*begin_list)->next, data);
}

t_list  *ft_list_push_strs(int size, char **strs)
{
    t_list *list;

    list = NULL;
    while (size)
    {
        ft_list_push_back(&list, *strs);
        size--;
        strs++;
    }
    return (list);
}

int     main(int argc, char **argv)
{
    t_list  *test;

    if (argc < 2)
    {
        printf("Usage: ft_list_at 'nbr' 'param1' 'param2' 'param3' ...");
        return (0);
    }
    test = ft_list_push_strs(argc - 1, argv + 1);
    ft_list_reverse(&test);
    ft_display_list(test);
}
