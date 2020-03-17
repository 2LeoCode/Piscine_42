#include <stdio.h>
#include <stdlib.h>

void    ft_putnbr(int nb);

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage ./a.out \"number\"");
        return (0);
    }
    ft_putnbr(atoi(argv[1]));
    printf("<<");
    return (0);
}