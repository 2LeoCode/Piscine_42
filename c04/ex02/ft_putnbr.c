#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long i;

    i = nb;
    if (i < 0)
    {
        ft_putchar('-');
        i *= -1;
    }
    if (i < 10)
        ft_putchar(i + 48);
    else
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
}
