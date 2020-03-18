#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    return ((*str) ? (1 + ft_strlen(str + 1)) : (0));
}

void    ft_fputc(char c, int file)
{
    write(file , &c, 1);
}

int     ft_readnwrite(int file, char *path)
{
    char c;
    if (read(1, &c, 1) == -1)
    {
        strerror(errno);
        return (-1);
    }
    if (c == '\n')
        return (0);
    ft_fputc(c, file);
    return (1 + ft_readnwrite(file, path));
}

int     ft_filesize(int fd)
{
    char    c;
    int     err;
    if (read(fd, &c, 1) == -1)
    {
        strerror(errno);
        return (-1);
    }
    if (c == '\n')
        return (0);
    return (1 + ft_filesize(fd));
}

void    ft_get_strs(int file, char *str, char *last, int sep)
{
    read(file, str, sep);
    str[sep] = 0;
    str[read(file, last, 16)] = 0;
}

void    ft_fputs(char *str, int file)
{
    if (!*str)
        return ;
    write(file, str, 1);
    ft_fputs(str + 1, file);
}

int     main(void)
{
    int fd = open("write.test", O_CREAT | O_RDWR | O_APPEND);
    ft_readnwrite(fd, "write.test");
    close(fd);
    char *str;
    int fd2;
    char strstock[17];
    int size;
    return (0);
}
