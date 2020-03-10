#include <stdio.h>

char    *ft_strdup(char *str);
int     ft_strcpy(char *s1, char *s2);

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 && !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

void    ft_test(char *str, int i)
{
    char *test;

    if (!(test = ft_strdup(str)))
        return ;
    if (i != 1)
        printf("\n\n");
    if (ft_strcmp(str, test))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%s], got [%s]", str, test);
}

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        ft_test("Hello World !", 0);
    else
        while (i < argc)
        {
            ft_test(argv[i], i);
            i++;
        }
    return (0);
}
