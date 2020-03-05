#include <stdio.h>

int     ft_atoi_base(char *str, char *base);

void    ft_test(char *str, char *base)
{
    int nb = ft_atoi_base(str, base);
    printf("Base %s -> %s\nBase 10 -> %d\n\n", base, str, nb);
}

int     main(int argc, char **argv)
{
    int i;

    i = 2;
    if (argc < 3)
        ft_test("1101", "01");
    else
        while (i < argc)
        {
            ft_test(argv[i], argv[1]);
            i++;
        }
    return (0);
}
