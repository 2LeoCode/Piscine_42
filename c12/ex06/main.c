#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

void    ft_display_list(t_list *list)
{
    if (list == NULL)
        return ;
    ft_display_list(list->next);
    printf("%s", (char*)list->data);
}

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

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *tmp;

    if (!(tmp = malloc(sizeof(t_list))))
        return ;
    if (!(tmp->data = ft_strdup((char*)data)))
        return ;
    tmp->next = *begin_list;
    *begin_list = tmp;
}

t_list  *ft_list_push_strs(int size, char **strs)
{
    t_list *list;

    list = NULL;
    while (size)
    {
        ft_list_push_front(&list, *strs);
        size--;
        strs++;
    }
    return (list);
}

int     main(int argc, char **argv)
{
    t_list *test;

    test = NULL;
    if (argc < 2)
    {
        printf("Usage: ft_list_clear 'param1' 'param2' 'param3' ...");
        return (0);
    }
    test = ft_list_push_strs(argc - 1, argv + 1);
    ft_display_list(test);
    ft_list_clear(test, &free);
    printf("%s", test->data);
    return(0);
}
