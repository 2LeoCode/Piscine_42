#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <tail.h>
#include <fcntl.h>

int     ft_disp_part(int file, char *path)
{
    char    c;
    int     err;

    if ((err = read(file, &c, 1)) <= 0)
    {
        if (err == -1)
            ft_puterr(errno, path);
        return ((err == -1) ? (FAILURE) : (SUCCESS));
    }
    write(1, &c, 1);
    return (ft_disp_part(file, path));
}

int     ft_display(int file, int fsize, int dsize, char *path)
{
    char    *buf;

    buf = malloc(sizeof(char) * (fsize - dsize));
    if (dsize < fsize)
        if (read(file, buf, fsize - dsize) == -1)
        {
            ft_puterr(errno, path);
            return (FAILURE);
        }
    free(buf);
    return ((!ft_disp_part(file, path)) ? (SUCCESS) : (FAILURE));
}

int     ft_tail(int ac, char **av, int size, int nbfiles)
{
    int fd;
    int filesize;

    if (!ac)
        return (SUCCESS);
    if ((fd = open(*av, O_RDONLY)) == -1)
    {
        ft_open_err(errno, *av);
        g_err = 0;
        return (ft_tail(ac - 1, av + 1, size, nbfiles));
    }
    if (nbfiles > 1)
        ft_putfilename(*av, ac, nbfiles);
    filesize = ft_filesize(fd, *av);
    if (close(fd) == -1)
    {
        ft_puterr(errno, *av);
        return (ft_tail(ac - 1, av + 1, size, nbfiles));
    }
    fd = open(*av, O_RDONLY);
    ft_display(fd, filesize, size, *av);
    return (ft_tail(ac - 1, av + 1, size, nbfiles));
}

int     ft_filesize(int fd, char *path)
{
    char    c;
    int     err;
    if ((err = read(fd, &c, 1)) <= 0)
    {
        if (err == -1)
            ft_puterr(fd, path);
        return (0);
    }
    return (1 + ft_filesize(fd, path));
}

int     main(int argc, char **argv)
{
    int size;

    g_err = 1;
    if (ft_strncmp(argv[1], "-c", 2))
        return (0);
    if ((size = ft_checknum(argv[2])) == FAILURE)
    {
        ft_size_err(argv[2]);
        return (FAILURE);
    }
    size = ft_atoi_tail(argv[2]);
    ft_tail(argc - 3, argv + 3, size, argc - 2);
    return (0);
}
