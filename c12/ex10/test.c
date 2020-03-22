#include "ft_list.h"
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

void    ft_test(int ac, char **av)
{
    if (!ac)
        return ;
    if (!ft_strcmp(*av, "N"))
        printf("%s", *av);
    ft_test(ac - 1, av + 1);
}

int     main(int argc, char **argv)
{
    ft_test(argc - 1, argv + 1);
    putchar('$');
    return (0);
}
