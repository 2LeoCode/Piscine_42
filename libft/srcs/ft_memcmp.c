#include <libft.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;
    if (!n)
        return (0);
    if (!*str1 || !*str2 || *str1 != *str2)
        return (*str1 - *str2);
    return (ft_memcmp(s1 + 1, s2 + 1, n - 1));
}
