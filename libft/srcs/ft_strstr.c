#include <libft.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    if (!*haystack)
        return (NULL);
    if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
        return (haystack);
    return (ft_strstr(haystack + 1, needle + 1));
}
