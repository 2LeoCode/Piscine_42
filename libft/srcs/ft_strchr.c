#include <libft.h>

char    *ft_strchr(const char *s, int c)
{
    if (!*s)
        return (c ? NULL : s);
    return ((*s == (char)c) ? s : ft_strchr(s + 1, c));
}
