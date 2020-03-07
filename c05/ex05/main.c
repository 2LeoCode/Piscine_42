#include <stdio.h>
#include <math.h>
#include <limits.h>

int     ft_sqrt(int nb);

void    ft_test(int nb)
{
    int test = ft_sqrt(nb);
    int real = (int)sqrt(nb);

    if (real * real != nb)
        if (test)
            printf("\t[ KO ]\t");
        else
            printf("\t[ OK ]\t");
    else
        if (test != real)
            printf("\t[ KO ]\t");
        else
            printf("\t[ OK ]\t");
    if (real * real != nb)
        printf("Expected [0], got [%d]\n\n", test);
    else
        printf("Expected [%d], got [%d]\n\n", real, test);
}

int     main(void)
{
    int i;

    i = -10;
    ft_test(INT_MAX);
    while (i <= 30)
    {
        ft_test(i);
        i++;
    }
    return (0);
}
