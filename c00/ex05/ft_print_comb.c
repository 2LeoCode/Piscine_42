#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    ft_print(char *str, int n)
{
    ft_putstr(str);
    write(1, ",", 1);
    str[n]++;
    if (str[n + 1])
    {
        str[n + 1] = str[n] + 1;
        if (str[n + 2])
            str[n + 2] = str[n + 1] + 1;
    }
}

void    ft_print_comb(void)
{
    char tab[4];

    tab[0] = '0';
    tab[1] = '1';
    tab[2] = '2';
    tab[3] = 0;
    while (tab[0] < '7')
    {
        while (tab[1] < '8')
        {
            while (tab[2] < '9')
                ft_print(tab, 2);
            ft_print(tab, 1);
        }
        ft_print(tab, 0);
    }
    ft_putstr(tab);
}
