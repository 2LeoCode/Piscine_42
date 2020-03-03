#include <stdio.h>

char    *ft_strupcase(char *str);

int     ft_str_is_uppercase2(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            return (0);
        i++;
    }
    return (1);
}

void    ft_test(char *str)
{
    if (!ft_str_is_uppercase2(str))
        printf("\t[ KO ]\tGot : %s\vString is not uppercase.\n\n", str);
    else
        printf("\t[ OK ]\tGot : %s\vString is uppercase.\n\n", str);
}

int     main(int argc, char **argv)
{
    char test0[] = "Hello World !";
    int i;

    i = 1;
    if (argc == 1)
        ft_test(ft_strupcase(test0));
    else
        while (i < argc)
        {
            ft_test(ft_strupcase(argv[i]));
            i++;
        }
    return (0);
}
