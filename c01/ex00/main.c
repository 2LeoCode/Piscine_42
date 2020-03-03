#include <stdio.h>

void    ft_ft(int *nbr);

int     main(void)
{
    int i;

    i = 0;
    ft_ft(&i);
    if (i == 42)
        printf("\t[ OK ]\t");
    else
        printf("\t[ KO ]\t");
    printf("Expected 42, got %d", i);
    return (0);
}
