#include <libft.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char*)dst;
    s = (unsigned char*)src;
    if (!ft_strlen(dst) || !ft_strlen(src) || !len)
    {
        *d = 0;
        return (dst);
    }
    *d = *s;
    return (ft_memmove(dst + 1, src + 1, len - sizeof(*dst)) - sizeof(*dst));
}
