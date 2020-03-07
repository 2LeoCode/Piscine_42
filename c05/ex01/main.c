#include <stdio.h>

int ft_recursive_factorial(int nb);

int     main(void)
{
    int i;

    i = -5;
    while (i < 16)
    {
        printf("[%d]\tfactorial -> [%d]\n\n", i, ft_recursive_factorial(i));
        i++;
    }
    return (0);
}
