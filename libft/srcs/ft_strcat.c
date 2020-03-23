#include <libft.h>

char    *ft_strcat(char *restrict s1, const char *restrict s2)
{
    if (!*s1)
        return (ft_strcpy(s1, s2));
    return (ft_strcat(s1 + 1, s2) - sizeof(char));
}
