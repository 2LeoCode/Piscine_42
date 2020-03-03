#include <stdio.h>

int     ft_str_is_printable(char *str);

void    ft_test(char *str, int is)
{
    printf("%s##################################\n\n", str);
    if (ft_str_is_printable(str) != is)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [%d], got [%d]\n\n", is, ft_str_is_printable(str));
}

int     main(void)
{
    int i;

    i = 1;
    ft_test("Hello\tworld !", 0);
    ft_test("Bonjour\v", 0);
    ft_test("Bonjour", 1);
    return (0);
}
