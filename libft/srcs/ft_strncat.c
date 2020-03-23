#include <libft.h>

char    *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    if (!*s1)
        return (ft_strncpy(s1, s2, n));
    return (ft_strncat(s1 + 1, s2, n) - sizeof(char));
}
