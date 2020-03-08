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
    write(1, "\n", 1);
}

int     ft_abs(int nb)
{
    if (nb < 0)
        return (-nb);
    else
        return (nb);
}

int     ft_check(char *tab, int i)
{
    int j;

    j = 0;
    if (!tab[i] || tab[i] == '/')
        return (1);
    if (tab[i] < '0' || tab[i] > '9')
        return (0);
    while (j < i)
    {
        if (tab[j] == tab[i])
            return (0);
        if (ft_abs(i - j) == ft_abs(tab[i] - tab[j]))
            return (0);
        j++;
    }
    return (ft_check(tab, i + 1));
}

int     ft_puzzle(char *tab, int i0, int i)
{
    if (i > 9)
    {
        ft_putstr(tab);
        tab[9] = '/';
        i = 8;
        return (1 + ft_puzzle(tab, i0, i));
    }
    tab[i]++;
    while (!ft_check(tab, 0))
    {
        if (tab[i] > '9')
        {
            if (i == 1)
                return (0);
            tab[i] = '/';
            return (ft_puzzle(tab, i0, i - 1));
        }
        tab[i]++;
    }
    return (ft_puzzle(tab, i0, i + 1));
}

int     ft_ten_queens_puzzle(void)
{
    int     i;
    int     j;
    int     nbposs;
    char    tab[11];

    i = 0;
    nbposs = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            tab[j] = '/';
            j++;
        }
        tab[j] = 0;
        tab[0] = i + 48;
        nbposs += ft_puzzle(tab, i, 1);
        i++;
    }
    return (nbposs);
}
