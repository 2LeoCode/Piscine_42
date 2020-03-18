#include <stdio.h>
#include <stdlib.h>

int     ft_any(char **tab, int(*f)(char*));

int     ft_str_is_lowcase(char *str)
{
    if (!*str)
        return (1);
    return ((*str < 'a' || *str > 'z') ? 0 : ft_str_is_lowcase(str + 1));
}

int     ft_strlen(char *str)
{
    if (!*str)
        return (0);
    return (1 + ft_strlen(str + 1));
}

void    ft_strcpy(char *dest, char *src)
{
    *dest = *src;
    if (!*src)
        return ;
    ft_strcpy(dest + 1, src + 1);
}

char    *ft_strdup(char *str)
{
    char *tmp;
    if (!(tmp = malloc(sizeof(char) * (ft_strlen(str) + 1))))
        return (NULL);
    ft_strcpy(tmp, str);
    return (tmp);
}

int     main(int argc, char **argv)
{
    char    **test;
    int     i;

    i = 0;
    if (argc == 1)
    {
        printf("any: Not enough arguments.\n");
        return (0);
    }
    test = malloc(sizeof(char*) * argc);
    while (i < argc - 1)
    {
        test[i] = ft_strdup(argv[i + 1]);
        i++;
    }
    test[i] = NULL;
    printf("%d\n", ft_any(test, &ft_str_is_lowcase));
    return (0);
}
