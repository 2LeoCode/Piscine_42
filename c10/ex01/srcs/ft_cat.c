#include <errno.h>
#include <libgen.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define FAILURE -1
#define SUCCESS 0

void    ft_putstr(char *str, int where)
{
    if (where <= 0)
        return ;
    if (!*str)
        return ;
    write (where, str, 1);
    ft_putstr(str + 1, where);
}

void    ft_puterr(int err, char *arg)
{
    ft_putstr("cat: ", 2);
    ft_putstr(basename(arg), 2);
    ft_putstr(": ", 2);
    ft_putstr(strerror(err), 2);
    write(2, "\n", 1);
}

int     ft_display(int fd, char *path)
{
    char    c;
    int     err;

    if ((err = read(fd, &c, 1)) <= 0)
    {
        if (err == -1)
            ft_puterr(errno, path);
        return ((err == -1) ? (FAILURE) : (SUCCESS));
    }
    write(1, &c, 1);
    return (ft_display(fd, path));
}

int     ft_cat(int ac, char **av)
{
    int fd;

    if (!ac)
        return (SUCCESS);
    if ((fd = open(*av, O_RDONLY)) == -1)
        ft_puterr(errno, *av);
    else
    {
        ft_display(fd, *av);
        if (close(fd) == -1)
            ft_puterr(errno, *av);
    }
    return (ft_cat(ac - 1, av + 1));
}

int     main(int argc, char **argv)
{
    ft_cat(argc - 1, argv + 1);
    return (0);
}
