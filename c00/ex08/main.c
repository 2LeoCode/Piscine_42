#include <stdio.h>

void    ft_print_combn(int n);

int     main(void)
{
    int i;

    i = 1;
    while (i < 10)
    {
        ft_print_combn(i);
        printf("\n\n################################\n\n");
        i++;
    }
    return (0);
}