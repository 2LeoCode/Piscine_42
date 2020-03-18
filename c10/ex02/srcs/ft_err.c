#include <libgen.h>
#include <string.h>
#include <tail.h>
#include <unistd.h>

void    ft_open_err(int err, char *arg)
{
    ft_putstr("tail: impossible d'ouvrir '", ERR);
    ft_putstr(basename(arg), ERR);
    ft_putstr("' en lecture: ", ERR);
    ft_putstr(strerror(err), ERR);
    write(ERR, "\n", 1);
}

void    ft_size_err(char *arg)
{
    ft_putstr("tail: nombre d'octets incorrect: « ", 2);
    ft_putstr(arg, ERR);
    ft_putstr(" »", ERR);
    write(ERR, "\n", 1);
}

void    ft_puterr(int err, char *arg)
{
    ft_putstr("tail: ", ERR);
    ft_putstr(basename(arg), ERR);
    ft_putstr(": ", ERR);
    ft_putstr(strerror(err), ERR);
    write(ERR, "\n", 1);
}
