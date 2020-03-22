#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 1));
}

int     main(int argc, char **argv)
{
    int i;

    i = 0;
    while (++i < argc)
    {
        if (ft_strcmp(argv[i], "-c"))
            printf("%s", argv[i]);
    }
    return (0);
}
