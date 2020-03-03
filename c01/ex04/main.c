#include <stdio.h>
#include <limits.h>

void    ft_ultimate_div_mod(int *a, int *b);

void    ft_test(int a, int b)
{
    int divreal;
    int modreal;

    divreal = a / b;
    modreal = a % b;
    ft_ultimate_div_mod(&a, &b);
    if (a != divreal || b != modreal)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d] [%d], got [%d] [%d]\n\n", divreal, modreal, a, b);
}

int     main(void)
{
    ft_test(0, 42);
    ft_test(-42, 2);
    ft_test(1000, -42);
    ft_test(INT_MAX, INT_MIN);
    return (0);
}
