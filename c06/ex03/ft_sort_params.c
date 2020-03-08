#include <unistd.h>

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    write(1, str, 1);
    ft_putstr(str + 1);
}

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 && !*s2)
        return (0);
    if (*s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     ft_check(int ac, char **av, int i)
{
    char *tmp;

    if (i > 0)
        if (ft_strcmp(av[i], av[i - 1]) < 0)
        {
            tmp = av[i];
            av[i] = av[i - 1];
            av[i - 1] = tmp;
            return (-1);
        }
    if (i < ac - 1)
        if (ft_strcmp(av[i], av[i + 1]) > 0)
        {
            tmp = av[i];
            av[i] = av[i + 1];
            av[i + 1] = tmp;
            return (1);
        }
    return (0);
}

char    **ft_sort_params(int ac, char **av, int i)
{
    char    *tmp;
    int     check;

    if (!ac)
        return (av);
    check = ft_check(ac, av, i);
    if (!check)
    {
        if (i == ac - 1)
            return (av);
        ft_sort_params(ac, av, i + 1);
    }
    else if (check < 0)
        ft_sort_params(ac, av, i - 1);
    else
        ft_sort_params(ac, av, i);
}

int     main(int argc, char **argv)
{
    int i;

    i = 0;
    argv = ft_sort_params(argc - 1, argv + 1, 0);
    while (i < argc - 1)
    {
        if (i)
            write(1, "\n", 1);
        i++;
        ft_putstr(argv[i - 1]);
    }
    return (0);
}
