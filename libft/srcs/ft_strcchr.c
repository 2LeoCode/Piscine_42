#include <libft.h>

char    *ft_strrchr(const char *s, int c)
{
    if (!*s)
        return (c ? NULL : s);
    if (*s == (char)c)
        if (!ft_strrchr(s + 1, c))
            return (s);
    return (ft_strrchr(s + 1, c));
}
