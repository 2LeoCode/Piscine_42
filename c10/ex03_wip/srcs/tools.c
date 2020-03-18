#include <hexdump.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    write(1, str, 1);
    ft_putstr(str + 1);
}

int     ft_strncmp(char *s1, char *s2, int n)
{
    if (*s1 != *s2 || !*s1 || !*s2)
        return ((n) ? (*s1 - *s2) : (0));
    return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}

void    ft_put_limit()
{
    ft_putstr(COL);
}
