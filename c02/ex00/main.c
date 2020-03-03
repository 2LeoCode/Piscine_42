#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

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

void    ft_test(char *src)
{
    char real[100];
    char test[100];

    strcpy(real, src);
    ft_strcpy(test, src);
    if (ft_strcmp(test, real))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%s], got [%s]\n\n", real, test);
}

int     main(void)
{
    ft_test("Hello World !");
    ft_test("HAWAZA !");
    ft_test(">><<>><<>><<>><<>><<>><<");
    ft_test("J'encule la moulinette");
    ft_test("");
    return (0);
}
