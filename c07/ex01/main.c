#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int min, int max);

void    ft_test(int min, int max)
{
    int *test;
    int i;

    i = 0;
    if (!(test = ft_range(min, max)))
    {
        if (min < max)
        {
            printf("\t[ KO ]\tExpected something, got (null)\n\n");
            return ;
        }
        printf("\t[ OK ]\tExpected (null), got (null)\n\n");
        return ;
    }
    if (test != NULL & min >= max)
    {
        printf("\t[ KO ]\tExpected (null), got shit\n\n");
        return ;
    }
    while (min < max)
    {
        printf(" [%d] ", test[i]);
        if (i > 0 && test[i - 1] != test[i] - 1)
            break ;
        i++;
        min++;
    }
    printf("\n");
    if (min < max)
        printf("\t[ KO ]\t( \"[%d] [%d]\" )\n\n", test[i - 1], test[i]);
    else
        printf("\t[ OK ]\tAll good\n\n");
}

int     main(void)
{
    ft_test(0, 10);
    ft_test(-5, 5);
    ft_test(-42, -30);
    ft_test(0, 0);
    ft_test(42, 42);
    ft_test(42, -42);
    ft_test(5, 3);
    ft_test(-12, -42);
    ft_test(-1, 1);
    ft_test(-1, 0);
    ft_test(0, 1);
    return (0);
}
