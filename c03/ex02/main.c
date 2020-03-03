#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strcat(char *dest, char *src);
int     ft_strlen(char *str);

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

char    *ft_strdup(char *str)
{
    char    *new;
    int     i;

    if (!(new = malloc(sizeof(char) * (ft_strlen(str) + 100))))
        return NULL;
    i = 0;
    while (str[i])
    {
        new[i] = str[i];
        i++;
    }
    new[i] = 0;
    return (new);
}

void    ft_test(char *s1, char *s2)
{
    char *real1 = ft_strdup(s1);
    char *real2 = ft_strdup(s2);
    char *real = strcat(real1, real2);
    char *test = ft_strcat(s1, s2);

    if (ft_strcmp(real, test))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%s], got [%s]\n\n", real, test);
    free(real1);
    free(real2);
}

int     main(void)
{
    char    s1[1000] = "\0";
    char    s2[20][100] = {"Bonjour ", "je ", "", "m'appelle ", "le", " ", "france ", "baguette\n", "mais ", "je ", "ne", " pas", " tres ", "bien ", "parler ", "le", " france", ".\n", 0};
    int     i;

    i = 0;
    while (s2[i])
    {
        ft_test(s1, s2[i]);
        i++;
    }
    return (0);
}
