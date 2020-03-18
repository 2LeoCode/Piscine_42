#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int ft_str_is_alpha(char *str)
{
    if (!*str)
        return (1);
    if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
        return (0);
    return (ft_str_is_alpha(str + 1));
}

int main(int argc, char **argv)
{
    printf("%d", ft_count_if(argv + 1, argc - 1, &ft_str_is_alpha));
    return (0);
}
