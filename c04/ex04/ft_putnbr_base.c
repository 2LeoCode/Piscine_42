#include <unistd.h>

int     ft_checkbase(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[j])
        {
            if (str[i] == str[j] && i != j)
                return (0);
            j++;
        }
        if (str[i] == '+' || str[i] == '-')
            return (0);
        i++;
    }
    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
    long    bs;
    long    nb;
    
    nb = (long)nbr;
    bs = (long)ft_checkbase(base);
    if (bs < 2)
        return ;
    if (nb < 0)
    {
        write (1, "-", 1);
        nb *= -1;
    }
    if (nb < bs)
        write(1, &base[nb], 1);
    else
    {
        ft_putnbr_base((int)(nb / bs), base);
        ft_putnbr_base((int)(nb % bs), base);
    }
}