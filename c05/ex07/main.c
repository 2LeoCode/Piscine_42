#include <limits.h>
#include <stdio.h>

int     ft_find_next_prime(int nb);

int     main(void)
{
    int i;

    i = -5;
    printf("[2147483647]\t->\t[%d]\n\n", ft_find_next_prime(INT_MAX));
    while (i <= 30)
    {
        printf("[%d]\t->\t[%d]\n\n", i, ft_find_next_prime(i));
        i++;
    }
    return (0);
}
