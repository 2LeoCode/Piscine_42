#include <stdio.h>

int     ft_atoi(char *str);

int     main(int argc, char **argv)
{
    int test;

    test = ft_atoi("Hello World !");
    if (test)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [0], got [%d]\n\n", test);
    test = ft_atoi("01");
    if (test != 1)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [1], got [%d]\n\n", test);
    test = ft_atoi("  \v\r\t\n\f-+-2147483648, The tough one ;)");
    if (test != -2147483648)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [-2147483648], got [%d]\n\n", test);
    test = ft_atoi("    --++--a123)");
    if (test)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [0], got [%d]\n\n", test);
    test = ft_atoi("    ---++-+-+-++----+-+--+-+-+-+-++------+-+--+-------+--++-+-+---42abc");
    if (test != 42)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [42], got [%d]\n\n", test);
    test = ft_atoi("zzzzz154");
    if (test)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [0], got [%d]\n\n", test);
    test = ft_atoi("    ---42a42");
    if (test != -42)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [-42], got [%d]\n\n", test);
    return (0);
}
