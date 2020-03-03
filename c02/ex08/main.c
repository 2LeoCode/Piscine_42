#include <stdio.h>

char    *ft_strlowcase(char *str);

int     ft_str_is_lowercase2(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return (0);
        i++;
    }
    return (1);
}

void    ft_test(char *str)
{
    if (!ft_str_is_lowercase2(str))
        printf("\t[ KO ]\tGot : %s\vString is not lowercase.\n\n", str);
    else
        printf("\t[ OK ]\tGot : %s\vString is lowercase.\n\n", str);
}

int     main(int argc, char **argv)
{
    char test0[] = "Hello World !";
    int i;

    i = 1;
    if (argc == 1)
        ft_test(ft_strlowcase(test0));
    else
        while (i < argc)
        {
            ft_test(ft_strlowcase(argv[i]));
            i++;
        }
    return (0);
}
