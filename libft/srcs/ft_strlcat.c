#include <libft.h>

size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    if (!*dst)
        return (ft_strlcpy(dst, src, dstsize));
    return (1 + ft_strlcat(dst + 1, src, dstsize - 1));
}
