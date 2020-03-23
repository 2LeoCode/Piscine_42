#include <libft.h>

size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    *dst = *src;
    if (!*src)
        return (0);
    if (!(dstsize - 1))
    {
        *dst = 0;
        return (ft_strlen((char*)src));
    }
    return (1 + ft_strlcpy(dst + 1, src + 1, dstsize - 1));
}
