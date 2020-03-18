#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int     main(void)
{
    int     fd;
    char    buf[10];

    buf[5] = 0;
    fd = open("test", O_RDONLY);
    read(fd, buf, 5);
    printf("%s\n", buf);
    read(fd, buf, 5);
    close(fd);
    printf("%s\n", buf);
    return (0);
}