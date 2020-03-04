#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int i;

    dest_len = ft_strlen(dest);
    i = 0;
    if (size)
        while (src[i] && ft_strlen(dest) < size - 1)
        {
            dest[dest_len + i] = src[i];
            i++;
        }
    dest[dest_len + i] = 0;
    if (dest_len < size)
        return (dest_len + ft_strlen(src));
    return (ft_strlen(src) + size);
}
