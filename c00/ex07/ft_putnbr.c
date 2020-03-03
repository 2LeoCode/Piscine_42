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
