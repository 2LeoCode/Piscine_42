#include <stdio.h>

void    ft_putnbr_base(int nbr, char *base);

int     ft_isspace(char c)
{
    if (c == '\n' || c == '\r' || c == '\t')
        return (1);
    if (c == '\v' || c == '\f' || c == ' ')
        return (1);
    return (0);
}

int     ft_atoi(char *str)
{
    long    nb;
    long    neg;
    int     i;

    i = 0;
    neg = 1;
    nb = 0;
    while (ft_isspace(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += (long)str[i] - 48;
        i++;
    }
    nb *= neg;
    return ((int)nb);
}

void    ft_test(int nb, char *base)
{
    printf("Base 10:\n%d\nBase %s:\n", nb, base);
    ft_putnbr_base(nb, base);
    printf("\n\n");
}

int     main(int argc, char **argv)
{
    int i;

    i = 2;
    if (argc < 3 || !(argc % 2))
        ft_test(135, "jul");
    else
    {
        while (i < argc)
        {
            ft_test(ft_atoi(argv[i]), argv[1]);
            i++;
        }
    }
    return (0);
}
