#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void     ft_putstr(char *str, int where)
{
    if (where <= 0)
        return ;
    if (!*str)
        return ;
    write (where, str, 1);
    ft_putstr(str + 1, where);
}

void    ft_display_file(int file)
{
    char    c;
    int     err;

    if ((err = read(file, &c, 1)) <= 0)
    {
        if (err == -1)
            ft_putstr("Cannot read file.\n", 2);
        return ;
    }
    write(1, &c, 1);
    ft_display_file(file);
}

int     main(int argc, char ** argv)
{
    int fd;

    if (argc == 1)
    {
        ft_putstr("File name missing.\n", 2);
        return (0);
    }
    if (argc > 2)
    {
        ft_putstr("Too many arguments.\n", 2);
        return (0);
    }
    fd = open(argv[1], O_RDONLY);
    ft_display_file(fd);
    return (0);
}
