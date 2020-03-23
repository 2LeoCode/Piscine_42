#include <libft.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char*)s;
    if (!n)
        return NULL;
    return ((*str == (unsigned char)c) ? str : ft_memchr(s + 1, c, n - 1));
}
