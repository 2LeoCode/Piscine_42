#include <libft.h>

char    *ft_strcpy(char *dst, const char *src)
{
    *dst = *src;
    if (!*src)
        return (dst);
    return (ft_strcpy(dst + 1, src + 1) - sizeof(char));
}
