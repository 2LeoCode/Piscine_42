#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int     main(int argc, char **argv)
{
    t_stock_str *test;

    if (argc == 1)
        return (0);
    test = ft_strs_to_tab(argc - 1, argv + 1);
    while ((test + 1)->str)
    {
        printf("%s\n%d\n%s\n", test->str, test->size, test->copy);
        test++;
    }
    printf("%s\n%d\n%s", test->str, test->size, test->copy);
    return (0);
}
