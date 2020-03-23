#include <libft.h>

int     ft_toupper(int c)
{
    if ((char)c < 'a' || (char)c > 'z')
        return (c);
    return (c - 32);
}
