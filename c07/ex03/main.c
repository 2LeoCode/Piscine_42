#include <stdio.h>

char    *ft_strjoin(int size, char **strs, char *sep);

int     main(int argc, char **argv)
{
    char *test;
    char sep[] = " ][ ";

    if (!(test = ft_strjoin(argc - 1, argv + 1, sep)))
        return (-1);
    if (!*test)
        if (argc == 1)
            printf("\t[ OK ]\tExpected (null), got (null)\n");
        else
            printf("\t[ KO ]\tExpected something, got (null)\n");
    if (argc == 1 && *test)
        printf("\t[ KO ] Expected (null), got shit\n");
    if (argc != 1)
        printf("%s", test);
}
