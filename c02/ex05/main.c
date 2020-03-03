#include <stdio.h>

int     ft_str_is_uppercase(char *str);

void    ft_test(char *str)
{
    printf("\t[%s] ", str);
    if (ft_str_is_uppercase(str))
        printf("is only uppercase.\n\n");
    else
        printf("is not only uppercase.\n\n");
}

int     main(int argc,  char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        ft_test("Hello World !");
    else
        while (i < argc)
        {
            ft_test(argv[i]);
            i++;
        }
    return (0);
}
