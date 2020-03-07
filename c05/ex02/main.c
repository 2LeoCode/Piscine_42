#include <stdio.h>
#include <math.h>

int     ft_iterative_power(int nb, int power);

void    ft_test(int nb, int power)
{
    int real;
    int test;

    real = pow(nb, power);
    test = ft_iterative_power(nb, power);
    if (power < 0)
        if (test)
            printf("\t[ KO ]\t");
        else
            printf("\t[ OK ]\t");
    else if (!power)
        if (test != 1)
            printf("\t[ KO ]\t");
        else
            printf("\t[ OK ]\t");
    else if (real != test)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    if (power < 0)
        printf("Expected [0], got [%d]\n\n", test);
    else if (!power)
        printf("Expected [1], got [%d]\n\n", test);
    else
        printf("Expected [%d], got [%d]\n\n", real, test);
}

int     main(void)
{
    int i;
    int j;

    i = -10;
    while (i < 10)
    {
        j = -10;
        while (j < 10)
        {
            ft_test(i, j);
            j++;
        }
        i++;
    }
    return (0);
}
