#include <stdio.h>
#include <stdlib.h>

int     ft_is_alphanumeric(char c);
char    *ft_strcapitalize(char *str);

int     ft_is_lowcase(char c)
{
    return (c >= 'a' && c <= 'z');
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    char *new;
    int i;

    new = malloc(sizeof(char) * (ft_strlen(str) + 1));
    i = 0;
    while (str[i])
    {
        new[i] = str[i];
        i++;
    }
    new[i] = 0;
    return (new);
}

void    ft_test(char *str)
{
    int     i;
    int     ko;
    char    *init;

    i = 0;
    ko = 0;
    if (!(init = ft_strdup(str)))
    {
        printf("Error\n");
        return ;
    }
    ft_strcapitalize(str);
    while (str[i])
    {
        if (!ft_is_alphanumeric(init[i]) && init[i] != str[i])
        {
            printf("\t[ KO ]\t");
            ko = i;
            break ;
        }
        if (ft_is_alphanumeric(init[i]) && !ft_is_alphanumeric(str[i]))
        {
            printf("\t[ KO ]\t");
            ko = i;
            break ;
        }
        if (!i && ft_is_lowcase(str[i]))
        {
            printf("\t[ KO ]\t");
            ko--;
            break ;
        }
        if (i && ft_is_lowcase(str[i]) && !ft_is_alphanumeric(str[i - 1]))
        {
            printf("\t[ KO ]\t");
            ko = i;
            break ;
        }
        i++;
    }
    free(init);
    i = 0;
    if (!ko)
        printf("\t[ OK ]\tGot : [%s]\n\n", str);
    else
    {
        printf("Got : [%s]\n\t\t      ", str);
        if (ko == -1)
            printf("^\n\n");
        while (i <= ko + 1)
        {
            if (i == ko + 1)
                printf("^");
            else
                printf(" ");
            i++;
        }
        printf("\n\n");
    }
}

int     main(int argc, char **argv)
{
    int     i;
    char    test0[] = "hello world !";

    i = 1;
    if (argc == 1)
        ft_test(test0);
    else
        while (i < argc)
        {
            ft_test(argv[i]);
            i++;
        }
    return (0);
}
