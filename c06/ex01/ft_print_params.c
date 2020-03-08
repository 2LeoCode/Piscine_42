
#include <unistd.h>

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    write(1, str, 1);
    ft_putstr(str + 1);
}

void    ft_print_params(int ac0, int ac, char **av)
{
    if (ac >= 2 * ac0 || ac0 == 0)
        return ;
    ft_putstr(av[ac - ac0]);
    if (ac < 2 * ac0 - 1)
        ft_putstr("\n");
    ft_print_params(ac0, ac + 1, av);
}

int     main(int argc, char **argv)
{
    ft_print_params(argc - 1, argc - 1, argv + 1);
    return (0);
}
