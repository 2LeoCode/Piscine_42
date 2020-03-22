#include "ft_list.h"
#include <stdio.h>

void    ft_str_is_numeric(char *str)
{
    if (!*str)
    {
        printf("N");
        return ;
    }
    if (*str < '0' || *str > '9')
    {
        printf("NN");
        return ;
    }
    ft_str_is_numeric(str + 1);
}

int     main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: ft_list_at 'nbr' 'param1' 'param2' 'param3' ...");
        return (0);
    }
    argc--;
    argv++;
    while (argc)
    {
        ft_str_is_numeric(*argv);
        argc--;
        argv++;
    }
    return (0);
}