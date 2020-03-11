#include <stdlib.h>

char    *ft_strstr(char *str, char *to_find, int ind);
int     ft_getsize(char *str, char *sep, int ind);

int     ft_strlen(char *str)
{
    return ((*str) ? (1 + ft_strlen(str + 1)) : (0));
}

int     ft_strncmp(char *s1, char *s2, int n)
{
    if (!n)
        return (0);
    if ((*s1 != *s2) || (!*s1 && !*s2))
        return (*s1 - *s2);
    return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}

int     ft_getsize(char *str, char *sep, int ind)
{
    if (!*str)
        if (ft_strstr(str - ft_strlen(sep), sep, 0) == str - ft_strlen(sep))
            return (0);
        else
            return ((!ind) ? (1) : (0));
    if (ft_strstr(str, sep, 0) == str)
        return (ft_getsize(str + ft_strlen(sep), sep, ind));
    if (ft_strstr(str + 1, sep, 0) == str + 1)
    {
        if (ind)
            return (1);
        return (1 + ft_getsize(str + 1, sep, ind));
    }
    if (ind)
        return(1 + ft_getsize(str + 1, sep, ind));
    return (ft_getsize(str + 1, sep, ind));
}

char    *ft_strstr(char *str, char *to_find, int ind)
{
    char    *tmp;
    int     size;
    int     i;

    if (!ind)
    {
        if (!ft_strncmp(str, to_find, ft_strlen(to_find)) || !*str)
            return ((!*str) ? (NULL) : (str));
        return (ft_strstr(str + 1, to_find, ind));
    }
    size = ft_getsize(str, to_find, 1);
    if (!(tmp = malloc(sizeof(char) * size)))
        return (NULL);
    i = 0;
    while (i < size)
    {
        tmp[i] = str[i];
        i++;
    }
    tmp[i] = 0;
    return (tmp);
}

char    **ft_split(char *str, char *charset)
{
    char    **tmp;
    int     i;
    int     j;
    int     size;

    i = 0;
    size = ft_getsize(str, charset, 0);
    if (!(tmp = malloc(sizeof(char*) * (size + 1))))
        return (NULL);
    while (i < size)
    {
        j = 0;
        while (ft_strstr(str, charset, 0) == str)
            str += ft_strlen(charset);
        if (!(tmp[i] = ft_strstr(str, charset, 1)))
            return (NULL);
        str += ft_strlen(tmp[i]);
        i++;
    }
    tmp[i] = 0;
    return (tmp);
}
