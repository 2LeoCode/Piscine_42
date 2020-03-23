#include <libft.h>

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    if (!len)
        return (dst);
    *dst = *src;
    if (!*src)
        return (dst);
    return (ft_strncpy(dst + 1, src + 1, len - 1));
}
