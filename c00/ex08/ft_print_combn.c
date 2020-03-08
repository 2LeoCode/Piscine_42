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

void    ft_print(char *str, int index)
{
    ft_putstr(str);
    write(1, ",", 1);
    str[index]++;
}

void    ft_printn(char *tab, int index, int n)
{
    if (index > n || index < 0)
        return ;
    if (index == n - 1)
    {
        while (tab[index] != '9')
            ft_print(tab, index);
        ft_printn(tab, index - 1, n);
        return ;
    }
    else
    {
        if (tab[index] == '9' - (n - index - 1))
        {
            ft_printn(tab, index - 1, n);
            return ;
        }
        else
        {
            ft_print(tab, index);
            while (index < n - 1)
            {
                tab[index + 1] = tab[index] + 1;
                index++;
            }
            ft_printn(tab, index, n);
        }
    }
}

void    ft_print_combn(int n)
{
    if (n > 9 || n < 1)
        return ;
    char    tab[10];
    int     i;

    i = 0;
    while (i < n)
    {
        tab[i] = i + 48;
        i++;
    }
    tab[i] = 0;
    ft_printn(tab, 0, n);
    ft_putstr(tab);
}
