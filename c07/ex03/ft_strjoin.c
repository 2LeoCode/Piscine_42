#include <stdlib.h>

int     ft_strlen(char *str)
{
    return ((!*str) ? (0) : (1 + ft_strlen(str + 1)));
}

int     ft_strcat(char *dest, char *src)
{
    if (!*src)
        return (0);
    if (*dest)
        dest += ft_strlen(dest);
    *dest = *src;
    dest[1] = 0;
    return (1 + ft_strcat(dest + 1, src + 1));
}

int     ft_get_size(int size, char **strs)
{
    if (!size)
        return (0);
    return (ft_strlen(*strs) + ft_get_size(size - 1, strs + 1));
}

int     ft_strfus(char *str, char **strs, char *sep, int size)
{
    str += ft_strcat(str, *strs);
    if (size == 1)
        return (0);
    return (ft_strfus(str + ft_strcat(str, sep), strs + 1, sep, size - 1));
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *tmp;
    int     mall_size;

    mall_size = sizeof(char) * ft_get_size(size, strs) + ft_strlen(sep) * (size - 1) + 1;
    if (!(tmp = malloc(mall_size)))
        return (NULL);
    *tmp = 0;
    if (!size)
        return (tmp);
    ft_strfus(tmp, strs, sep, size);
    return (tmp);
}
