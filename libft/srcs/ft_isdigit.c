#include <libft.h>

int     ft_isdigit(int c)
{
    if ((char)c < '0' || (char)c > '9')
        return (0);
    return (1);
}
