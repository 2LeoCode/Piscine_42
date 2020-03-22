#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void    ft_list_sort(t_list **begin_list, int (*cmp)());

int     ft_strlen(char *str)
{
    return (*str ? (1 + ft_strlen(str + 1)) : 0);
}

void    ft_strcpy(char *dest, char *src)
{
    *dest = *src;
    if (!*src)
        return ;
    ft_strcpy(dest + 1, src + 1);
}

void    *ft_strdup(char *str)
{
    char *tmp;

    if (!(tmp = malloc(sizeof(char) * (ft_strlen(str) + 1))))
        return (NULL);
    ft_strcpy(tmp, str);
    return ((void*)tmp);
}

void    ft_list_push_front(t_list **list, char *data)
{
    t_list *tmp;

    if (!(tmp = malloc(sizeof(t_list))))
        return ;
    if (!(tmp->data = ft_strdup(data)))
        return ;
    tmp->next = *list;
    *list = tmp;
}

void    ft_display_list(t_list *list)
{
    if (!list)
        return ;
    printf("%s", (char*)list->data);
    ft_display_list(list->next);
}

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     ft_void_to_strcmp(void *data, void *data2)
{
    return (ft_strcmp((char*)data, (char*)data2));
}

void    ft_reset_list(t_list **list)
{
    t_list *prev;
    
    prev = *list;
    *list = (*list)->next;
    while (prev)
    {
        free(prev->data);
        prev->data = NULL;
        free(prev);
        prev = *list;
        if (prev)
            *list = (*list)->next;
    }
}

int     main(int argc, char **argv)
{
    t_list *test;

    if (argc < 2)
    {
        printf("Usage: ft_list_sort 'param1' 'param2' 'param3' ...");
        return (0);
    }
    while (--argc)
        ft_list_push_front(&test, argv[argc]);
    ft_list_sort(&test, &ft_void_to_strcmp);
    ft_display_list(test);
    ft_reset_list(&test);
    return (0);
}
