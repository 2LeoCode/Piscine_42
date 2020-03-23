#include <libft.h>

int     ft_isascii(int c)
{
    if ((char)c < 0 || (char)c > 127)
        return (0);
    return(1);
}
