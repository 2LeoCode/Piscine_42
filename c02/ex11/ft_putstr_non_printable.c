#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_hexa(char np)
{
    ft_putchar('\\');
    if (np / 16 < 10)
        ft_putchar(np / 16 + 48);
    else
        ft_putchar(np / 16 + 87);
    if (np % 16 < 10)
        ft_putchar(np % 16 + 48);
    else
        ft_putchar(np % 16 + 87);
}

void    ft_putstr_non_printable(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 127)
            ft_putchar(str[i]);
        else
            ft_print_hexa(str[i]);
        i++;
    }
}
