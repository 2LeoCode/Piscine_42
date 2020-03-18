#include <hexdump.h>

int     ft_putstr16(char *str)
{
    int i;
    int j;

    i = 0;
    j = 16;
    ft_put_limit();
    while (str[i] && i < j)
    {
        if (str[i] < 32 || str[i] > 126)
            ft_putchar('.');
        else
            write(1, &str[i], 1);
        /*if (str[i] > 126)
        {
            ft_putchar('.');
            j--;
        }*/
        i++;
    }
    ft_put_limit();
    return (i - j);
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

void    ft_puthexa(char spe)
{
    if (!spe)
        return ;
    if (spe / 256 && spe / 256 < 16)
        ft_putchar(' ');
    if (spe / 16 < 10)
        ft_putchar(spe / 16 + 48);
    else if (spe / 16 < 16)
        ft_putchar(spe / 16 + 87);
    ft_puthexa(spe / 16);
    if (spe % 16 < 10)
        ft_putchar(spe % 16 + 48);
    else
        ft_putchar(spe % 16 + 87);
}

void    ft_print_hexa(char *str, int index, int len)
{
    if (index < 16)
    {
        if (!str[index])
            len = index;
        if (index < len && str[index] < 128)
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
        /*else if (str[index] > 127)
            ft_puthexa(str[index]);*/
        else
            ft_putstr("  ");
        ft_putstr((index % 5) ? "  " : " ");
        ft_print_hexa(str, index + 1, len);
    }
}

int     ft_hexdump(char *str, int size)
{
    if (!*str)
        return (0);
    ft_print_adress(g_addr);
    ft_print_hexa(str, 0, 16);
    ft_putstr16(str);
    ft_putchar('\n');
    g_addr += 16;
    return (ft_hexdump(str + 16, size - 16));
}
