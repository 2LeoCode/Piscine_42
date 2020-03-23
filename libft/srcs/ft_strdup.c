#include <libft.h>
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    char *tmp;

    if (!(tmp = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
        return (NULL);
    ft_strcpy(tmp, s1);
    return (tmp);
}
