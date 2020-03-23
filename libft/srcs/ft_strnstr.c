#include <libft.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!len || !*haystack)
        return NULL;
    if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
        return (haystack);
    return (ft_strnstr(haystack + 1, needle, len - 1));
}
