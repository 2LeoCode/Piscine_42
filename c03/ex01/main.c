#include <string.h>
#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

void    ft_test(char *s1, char *s2, unsigned int n)
{
    int real = strncmp(s1, s2, n);
    int test = ft_strncmp(s1, s2, n);
    
    if ((test < 0 && real >= 0) || (test >= 0 && real < 0))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d], got [%d]\t[%s] [%s] [%d]\n\n", real, test, s1, s2, n);
}

int     main(void)
{
    char            test[9][20] = {"Hello World", "Hello World !", "hello world !", "", "", "Hello", "abc", "abcd", "abcdef"};
    unsigned int    values[] = {0, 1, 2, 5, 10, 25, 185, 9999};
    int             i;
    int             j;
    int             k;

    i = 0;
    while (i < 9)
    {
        j = 0;
        while (j < 9)
        {
            k = 0;
            if (i != j)
                while (k < 8)
                {
                    ft_test(test[i], test[j], values[k]);
                    k++;
                }
            j++;
        }
        i++;
    }
    return (0);
}
