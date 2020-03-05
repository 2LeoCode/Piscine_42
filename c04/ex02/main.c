#include <stdio.h>
#include <limits.h>

void    ft_putnbr(int nb);

int     main(void)
{
    ft_putnbr(42);
    printf("\t\t-> 42\n");
    ft_putnbr(-42);
    printf("\t\t-> -42\n");
    ft_putnbr(0);
    printf("\t\t-> 0\n");
    ft_putnbr(INT_MAX);
    printf("\t-> 2147483647\n");
    ft_putnbr(INT_MIN);
    printf("\t-> -2147483648\n");
    return (0);
}
