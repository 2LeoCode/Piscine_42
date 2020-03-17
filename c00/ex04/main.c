#include <stdio.h>
#include <limits.h>

void    ft_is_negative(int nb);

int     main(void)
{
    int tab[5] = {-42, 42, 0, INT_MIN, INT_MAX};
    int i;

    i = 0;
    while (i < 5)
    {
        ft_is_negative(tab[i]);
        i++;
    }
    return (0);
}
