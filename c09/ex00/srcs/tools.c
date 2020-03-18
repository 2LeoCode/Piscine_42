#include "../headers/tools.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    ft_putchar(*str);
    ft_putstr(str + 1);
}

int     ft_strlen(char *str)
{
    return ((!str) ? (0) : (1 + ft_strlen(str + 1)));
}

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || (*s1 != *s2))
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}
