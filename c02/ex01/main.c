#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

void    ft_test(char *src, int n)
{
    char real[100];
    char test[100];

    strncpy(real, src, n);
    ft_strncpy(test, src, n);
    if (ft_strcmp(test, real))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%s], got [%s]\n\n", real, test);
}

int     main(void)
{
    ft_test("Hello World !", 5);
    ft_test("HAWAZA !", 4);
    ft_test("Prions la sainte moulinette", 100);
    ft_test("---------Fuck la", 16);
    ft_test("Jul", 10);
    ft_test("", 5);
    return (0);
}
