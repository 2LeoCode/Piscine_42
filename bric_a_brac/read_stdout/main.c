#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int     main(void)
{
    char tab[4];
    write(1, "lol\n", 4);
    lseek(0, -4, SEEK_CUR);
    read(0, tab, 3);
    tab[4] = 0;
    printf("%s\n", tab);
}