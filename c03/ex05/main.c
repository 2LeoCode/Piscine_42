#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int nb);
unsigned int    ft_strlen(char *str);

int             ft_strcmp(char *s1, char *s2)
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

char            *ft_strdup(char *str)
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

void            ft_test(char *s1, char *s2, int n)
{
    char *real = ft_strdup(s1);
    char *example = ft_strdup(s1);
    unsigned int r = strlcat(real, s2, n);
    unsigned int t = ft_strlcat(s1, s2, n);

    if (r != t || ft_strcmp(real, s1))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("For [%s] [%s] [%d]\n\tExpected [%s] [%d], got [%s] [%d]\n\n", example, s2, n, real, r, s1, t);
    free(real);
    free(example);
}

int             main(void)
{
    char    s1[1000] = "\0";
    char    s2[18][100] = {"Bonjour ", "je ", "", "m'appelle ", "le", " ", "france ", "baguette\n", "mais ", "je ", "ne", " pas", " tres ", "bien ", "parler ", "le", " france", ".\n"};
    int     i;
    float   n;

    i = 0;
    n = 0;
    while (i < 18)
    {
        ft_test(s1, s2[i], (i == 14) ? 0 : i);
        i++;
    }
    return (0);
}
