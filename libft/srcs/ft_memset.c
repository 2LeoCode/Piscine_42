#include <libft.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp;

    tmp = b;
    if (!len)
        return (b);
    *tmp = (unsigned char)c;
    b = tmp;
    return (ft_memset(b + 1, c, len - sizeof(*b)));
}
