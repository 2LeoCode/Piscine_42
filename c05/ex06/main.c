#include <stdio.h>
#include <limits.h>

int     ft_is_prime(int nb);

void    ft_test(int nb)
{
    if (ft_is_prime(nb))
        printf("\t[%d] is prime\n\n", nb);
    else
        printf("\t[%d] is not prime\n\n", nb);
}

int     main(void)
{
    int i;

    i = -5;
    ft_test(INT_MAX);
    while (i <= 30)
    {
        ft_test(i);
        i++;
    }
    return (0);
}
