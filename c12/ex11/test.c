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
    {
        printf("%s", *av);
        return ;
    }
    ft_test(ac - 1, av + 1);
}

int     main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: ft_list_find 'arg1' 'arg2' 'arg3' ...");
        return (0);
    }
    ft_test(argc - 1, argv + 1);
    printf("%s", argv[1]);
    return (0);
}
