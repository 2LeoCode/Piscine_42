#include <operations.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    if (!*str)
        return ;
    write(1, str, 1);
    ft_putstr(str + 1);
}

int     ft_strlen(char *str)
{
    return (*str ? (1 + ft_strlen(str + 1)) : 0);
}

void    *do_op(char *operator)
{
    if (ft_strlen(operator) > 1)
        return (NULL);
    switch (operator[0])
    {
        case '+':
            return (&ft_add);
        case '-':
            return (&ft_sub);
        case '*':
            return (&ft_mul);
        case '/':
            return (&ft_div);
        case '%':
            return (&ft_mod);
        default:
            return (NULL);
    }
}

int     main(int argc, char **argv)
{
    void (*op)(t_llong, t_llong);

    if (argc != 4)
        return (0);
    op = do_op(argv[2]);
    if (op)
    {
        (*op)(ft_atoi(argv[1]), ft_atoi(argv[3]));
        return (0);
    }
    write(1, "0", 1);
    return (0);
}
