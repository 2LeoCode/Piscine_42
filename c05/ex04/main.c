#include <stdio.h>

int     ft_fibonacci(int index);

int     main(void)
{
    int i;

    i = -5;
    while (i <= 20)
    {
        printf("\tfibonacci(%d)\t-> [%d]\n\n", i, ft_fibonacci(i));
        i++;
    }
    return (0);
}
