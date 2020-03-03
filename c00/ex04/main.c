#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int i;
    
    if (nb < 0)
    {
        ft_putchar('-');
        i = -nb;
    }
    else
        i = nb;
    if (i < 10)
        ft_putchar(i + 48);
    else
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
}

void    ft_is_negative(int nb);

int     main(void)
{
    int tab[5] = {-42, 42, 0, INT_MIN, INT_MAX};
    int i;

    i = 0;
    while (i < 5)
    {
        ft_putnbr(tab[i]);
        ft_putchar(',');
        ft_is_negative(tab[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}
