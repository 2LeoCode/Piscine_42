#include <stdio.h>
#include <limits.h>

void    ft_swap(int *a, int *b);

void    ft_test(int a, int b)
{
    int i;
    int j;

    i = a;
    j = b;
    ft_swap(&a, &b);
    if (a != j || b != i)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d] [%d], got [%d] [%d]\n\n", j, i, a, b);
}

int     main(void)
{
    ft_test(42, -42);
    ft_test(0, 0);
    ft_test(0, -1000);
    ft_test(0, 1000);
    ft_test(-42, -32);
    ft_test(INT_MIN, INT_MAX);
}
