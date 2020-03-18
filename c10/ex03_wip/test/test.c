#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>

int     main(void)
{
    for(int i=0 ; i < 200 ; i++)
    {
        char lettre = i;
        printf("%d\t> %c\n",i, lettre);
    }
    return 0;
}