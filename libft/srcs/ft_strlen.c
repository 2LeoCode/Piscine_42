#include <libft.h>

size_t  ft_strlen(const char *s)
{
    return (*s ? (1 + ft_strlen(s + 1)) : 0);
}
