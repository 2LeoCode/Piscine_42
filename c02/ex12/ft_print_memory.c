#include <unistd.h>

typedef unsigned long long int t_ullint;

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] && i < 16)
    {
        if (str[i] < 32 || str[i] > 126)
            ft_putchar('.');
        else
            write(1, &str[i], 1);
        i++;
    }
    return (i);
}

void    ft_print_adress(t_ullint addr)
{
    int         i;
    char        str[17];
    t_ullint    nb;

    i = 15;
    nb = addr;
    while (i >= 0)
    {
        if (nb)
        {
            if (nb % 16 < 10)
                str[i] = nb % 16 + 48;
            else
                str[i] = nb % 16 + 87;
            nb /= 16;
        }
        else
            str[i] = '0';
        i--;
    }
    str[16] = 0;
    ft_putstr(str);
    ft_putstr(": ");
}

void    ft_print_hexa(char *str, int index, int len)
{
    if (index < 16)
    {
        if (!str[index])
            len = index;
        if (index < len)
        {
            if (str[index] / 16 < 10)
                ft_putchar(str[index] / 16 + 48);
            else
                ft_putchar(str[index] / 16 + 87);
            if (str[index] % 16 < 10)
                ft_putchar(str[index] % 16 + 48);
            else
                ft_putchar(str[index] % 16 + 87);
        }
        else
            ft_putstr("  ");
        if (index % 2)
            ft_putchar(' ');
        ft_print_hexa(str, index + 1, len);
    }
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char   *str;
    int             len;

    str = addr;
    if (size < 16)
        len = size;
    else
        len = 16;
    while (*str)
    {
        t_ullint add = (t_ullint)addr;
        ft_print_adress(add);
        ft_print_hexa(str, 0, len);
        len = ft_putstr(str);
        ft_putchar('\n');
        str = &str[len];
        addr += len;
    }
    return (addr);
}
