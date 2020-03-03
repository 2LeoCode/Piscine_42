#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int    ft_strlen(char *str);

void            ft_test(char *dest, char *src, int length)
{
    int i;

    i = ft_strlcpy(dest, src, length);
    printf("\tGot [%d][%s]\n\n", i, dest);
}

int             main(void)
{
    char src0[] = "Hello World !";
    char src1[] = "";
    char dest0[] = "Jean-Damien le bougre.";
    char dest1[] = "";
    char dest2[] = "Jul";
    ft_test(dest0, src0, 13);
    ft_test(dest0, src0, 5);
    ft_test(dest1, src0, 0);
    ft_test(dest1, src0, 5);
    ft_test(dest2, src0, 5);
    ft_test(dest2, src1, 0);
    return (0);
}