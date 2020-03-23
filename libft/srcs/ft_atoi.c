#include <stdio.h>

int     ft_atoi(const char *str)
{
    char    *s;
    int     nb;
    int     neg;

    nb = 0;
    neg = 1;
    s = (char*)str;
    if (*s == '-')
    {
        neg = -neg;
        s++;
    }
    while (ft_isdigit(*s))
    {
        nb = 10 * nb + (int)*s - 48;
        s++;
    }
    return (neg * nb);
}
