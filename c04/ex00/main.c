#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str);

void    ft_test(char *str)
{
    if (ft_strlen(str) != strlen(str))
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d], got [%d]\n\n", strlen(str), ft_strlen(str));
}

int     main(int argc, char **argv)
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
