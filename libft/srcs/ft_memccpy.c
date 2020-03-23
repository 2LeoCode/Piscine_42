#include <libft.h>

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    int *d;
    const int *s;

    d = (int*)dst;
    s = (int*)src;
    if (!n)
        return NULL;
    if (*d == (unsigned char)c)
        return (dst + sizeof(*dst));
    *d = *s;
    return (ft_memccpy(dst + 1, src + 1, c, n - sizeof(*dst)));
}
