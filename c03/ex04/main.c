#include <string.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);
int     ft_strlen(char *str);

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void    ft_test(char *str, char *to_find)
{
    char *real = strstr(str, to_find);
    char *test = ft_strstr(str, to_find);

    if (real == NULL && test == NULL)
        printf("\t[ OK ]\t");
    else if ((real == NULL && test != NULL) || (real != NULL && test == NULL))
        printf("\t[ KO ]\t");
    else if (ft_strcmp(real, test))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%s], got [%s]\n\n", real, test);
}

int     main(void)
{
    char    str1[] = "J'aime enculer des poneys, bien fort dans l'anus";
    char    to_find[10][30] = {"", "J'", "J'aime enculer.", ", ", "e", "en", "avec de la moutarde", "l'anus", "bien fort dans l'anus", ".ys, "};
    int     i;

    i = 0;
    while (i < 10)
    {
        ft_test(str1, to_find[i]);
        i++;
    }
    return (0);
}
