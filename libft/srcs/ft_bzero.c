#include <libft.h>

void    ft_bzero(void *s, size_t n)
{
    int *tmp;

    tmp = (int*)s;
    if (!n)
        return ;
    *tmp = 0;
    s = tmp;
    ft_bzero (s + 1, n - sizeof(*s));
}
