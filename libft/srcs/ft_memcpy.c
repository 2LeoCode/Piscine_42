#include <libft.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    int *d;
    const int *s;

    d = (int*)dst;
    s = (int*)src;
    if (!n)
        return (dst);
    *d = *s;
    return (ft_memcpy(dst + 1, src + 1, n - sizeof(*dst)) - sizeof(*dst));
}
