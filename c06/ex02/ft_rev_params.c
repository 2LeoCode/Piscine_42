#include <unistd.h>

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    write(1, str, 1);
    ft_putstr(str + 1);
}

int     main(int argc, char **argv)
{
    while (argc > 1)
    {
        ft_putstr(argv[--argc]);
        if (argc > 1)
            ft_putstr("\n");
    }
    return (0);
}
