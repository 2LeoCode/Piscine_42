#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <tail.h>
#include <unistd.h>
#include <libgen.h>

void    ft_putfilename(char *path, int pos, int first)
{
    if (pos != first && g_err)
        write(IN, "\n", 1);
    g_err = 1;
    ft_putstr("==> ", IN);
    ft_putstr(basename(path), IN);
    ft_putstr(" <==\n", IN);
}

int     ft_strncmp(char *s1, char *s2, int n)
{
    if (*s1 != *s2 || !*s1 || !*s2)
        return ((n) ? (*s1 - *s2) : (0));
    return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}

int     ft_checknum(char *str)
{
    if (!*str)
        return (SUCCESS);
    if (*str < '0' || *str > '9')
        return (FAILURE);
    return (ft_checknum(str + 1));
}

int     ft_atoi_tail(char *str)
{
    if (!str[1])
        return (*str - 48);
    else
        return ((*str - 48) * 10 + ft_atoi_tail(str + 1));
}

void    ft_putstr(char *str, int where)
{
    if (where <= 0)
        return ;
    if (!*str)
        return ;
    write (where, str, 1);
    ft_putstr(str + 1, where);
}
