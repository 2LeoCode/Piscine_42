#include <hexdump.h>

int     main(int argc, char **argv)
{
    g_straddr[8] = 0;
    g_addr = 0;
    if (argc < 2)
    {
        ft_putstr("hexdump : no option selected (try -C)\n");
        return (0);
    }
    if (argc > 2)
    {
        ft_putstr("hexdump : Too many arguments\n");
        return (0);
    }
    if (ft_strncmp(argv[1], "-C", 2))
        return (0);
    ft_filedump();
}
