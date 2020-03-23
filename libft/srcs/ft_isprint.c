#include <libft.h>

int     ft_isprint(int c)
{
    if ((char)c < ' ' || (char)c > '~')
        return (0);
    return (1);
}
