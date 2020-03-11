#include <stdlib.h>
#include "ft_stock_str.h"

typedef char t_bool;

int                 ft_strlen(char *str)
{
    return ((!*str) ? (0) : (1 + ft_strlen(str + 1)));
}

void    ft_strcpy(char *dest, char *src)
{
    *dest = *src;
    if (*src)
        ft_strcpy(dest + 1, src + 1);
}

char    *ft_strdup(char *str)
{
    char *tmp;
    if (!(tmp = malloc(sizeof(char) * (ft_strlen(str) + 1))))
        return (NULL);
    ft_strcpy(tmp, str);
    return (tmp);
}

int                 ft_put_strs(t_stock_str *to, int size, char **strs)
{
    if (!size)
    {
        to->str = 0;
        return (1);
    }
    to->str = *strs;
    to->size = ft_strlen(*strs);
    if (!(to->copy = ft_strdup(*strs)))
        return (0);
    return (ft_put_strs(to + 1, size - 1, strs + 1));
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;

    if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
        return (NULL);
    if (!ft_put_strs(tab, ac, av))
        return (NULL);
    return(tab);
}
