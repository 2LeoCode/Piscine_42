#include <unistd.h>

void    ft_putstr(char *str);

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        ft_putstr("Hello World !\n");
    else
        while (i < argc)
        {
            ft_putstr(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    return (0);
}
