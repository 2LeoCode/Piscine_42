#include <stdio.h>
#include <limits.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

void    ft_test(int a, int b)
{
    int divtest;
    int modtest;
    int divreal;
    int modreal;

    divreal = a / b;
    modreal = a % b;
    ft_div_mod(a, b, &divtest, &modtest);
    if (divtest != divreal || modtest != modreal)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d] [%d], got [%d] [%d]\n\n", divreal, modreal, divtest, modtest);
}

int     main(void)
{
    ft_test(1000, 586);
    ft_test(INT_MAX, 3);
    ft_test(-186542, 647);
    ft_test(0, INT_MIN);
    ft_test(42, 0);
}
