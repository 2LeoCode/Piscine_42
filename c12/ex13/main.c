#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    ft_list_merge(t_list **begin_list1, t_list *begin_list2);

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
    printf("%s", (char*)list->data);
    ft_display_list(list->next);
}

void    ft_list_push_back(t_list **begin_list, char *data)
{
    if (!*begin_list)
    {
        *begin_list = malloc(sizeof(t_list));
        if (!((*begin_list)->data = ft_strdup((char*)data)))
            return ;
        (*begin_list)->next = NULL;
        return ;
    }
    ft_list_push_back(&(*begin_list)->next, data);
}

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     main(int argc, char **argv)
{
    t_list  *test;
    t_list  *test2;
    int i;

    test = NULL;
    test2 = NULL;
    i = 0;
    if (argc < 2)
    {
        printf("Usage: ft_list_merge 'param1' 'param2' 'param3' ... -c 'param2-1' 'param2-2' 'param2-3' ...");
        return (0);
    }
    while (++i < argc && ft_strcmp(argv[i], "-c"))
        ft_list_push_back(&test, argv[i]);
    while (++i < argc)
        ft_list_push_back(&test, argv[i]);
    ft_list_merge(&test, test2);
    ft_display_list(test);
    return (0);
}
