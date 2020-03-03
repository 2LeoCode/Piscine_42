#include <string.h>
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);

void    ft_test(char *s1, char *s2)
{
    int real = strcmp(s1, s2);
    int test = ft_strcmp(s1, s2);

    if ((test < 0 && real >= 0) || (test >= 0 && real < 0))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d], got [%d]\n\n", real, test);
}

int     main(void)
{
    char test[9][20] = {"Hello World", "Hello World !", "hello world !", "", "", "Hello", "abc", "abcd", "abcdef"};
    int i;
    int j;

    i = 0;
    while (i < 9)
    {
        j = 0;
        while (j < 9)
        {
            if (i != j)
                ft_test(test[i], test[j]);
            j++;
        }
        i++;
    }
    return (0);
}
