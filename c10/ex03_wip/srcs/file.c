#include <hexdump.h>

int     ft_getsize(char *path)
{
    int     fd;
    char    c;
    int     i;
    int     size;

    fd = open(path, O_RDONLY);
    if (fd < 0)
    {
        strerror(errno);
        return (-1);
    }
    while ((i = read(fd, &c, 1)))
    {
        size++;
        if (i < 0)
        {
            strerror(errno);
            return (-1);
        }
    }
    close(fd);
    return (size);
}

void    ft_fenter(int file, char *path)
{
    char c;
    
    read(1, &c, 1);
    if (c == '\n')
    {
        if (write(file, &c, 1) < 0)
            strerror(errno);
        return ;
    }
    if (write(file, &c, 1) < 0)
    {
        strerror(errno);
        return ;
    }
    if (c > 127)
        write(file, ".", 1);
    ft_fenter(file, path);
}

void    ft_fputs(char *path, char *str, int erase)
{
    int fd;
    int i;

    if ((fd = open(path, O_WRONLY | (erase ? O_TRUNC : 0))) < 0)
    {
        strerror(errno);
        return ;
    }
    while (str[i])
    {
        if (write(fd , &str[i], 1) < 0)
        {
            strerror(errno);
            return;
        }
        i++;
    }
    close(fd);
}

int    ft_read(int file, char *str, int size)
{
    int len;

    if ((len = read(file, str, size)) < 0)
    {
        strerror(errno);
        return (-1);
    }
    return (len);
}

void    ft_filedump()
{
    int fd;
    char *str;
    char stay[17];
    int size;
    int len;

    fd = open(".data", O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
    ft_fenter(fd, ".data");
    close(fd);
    size = ft_getsize(".data");
    if (!(str = malloc(sizeof(char) * (size - (size % 16) + 1))))
        return ;
    fd = open(".data", O_RDONLY);
    if ((len = ft_read(fd, str, size - (size % 16))) < 0)
        return ;
    str[len] = 0;
    if ((len = ft_read(fd, stay, 16)) < 0)
        return ;
    stay[len] = 0;
    close(fd);
    ft_fputs(".data", stay, 1);
    ft_hexdump(str, size - size % 16);
    free(str);
    ft_filedump();
}
