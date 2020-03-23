#include <libft.h>

int     ft_strcmp(const char *s1, const char *s2)
{
    if (!*s1 || !*s2 || *s1 != *s2)
        return (*s1 - *s2);
    return (ft_strcmp(s1 + 1, s2 + 2));
}
