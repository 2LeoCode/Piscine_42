#include <unistd.h>

void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    ft_putchar(*str);
    ft_putstr(str + 1);
}
