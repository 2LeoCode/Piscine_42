#include <unistd.h>

void    ft_putstr_non_printable(char *str);

void    ft_test(void)
{
    char test0[] = "Hello World !\n";
    char test1[] = "\n\r\v\t\f";
    char test2[] = "Je devrais m'afficher tel que je suis.";

    write(1, "[", 1);
    ft_putstr_non_printable(test0);
    write(1, "]\n\n[", 4);
    ft_putstr_non_printable(test1);
    write(1, "]\n\n[", 4);
    ft_putstr_non_printable(test2);
    write(1, "]\n", 2);
}

int     main(void)
{
    ft_test();
    return (0);
}
