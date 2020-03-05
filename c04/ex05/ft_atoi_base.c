int     ft_isspace(char c)
{
    if (c == '\n' || c == '\r' || c == '\t')
        return (1);
    if (c == '\v' || c == '\f' || c == ' ')
        return (1);
    return (0);
}

int     ft_checkbase(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[j])
        {
            if (str[i] == str[j] && i != j)
                return (0);
            j++;
        }
        if (str[i] == '+' || str[i] == '-')
            return (0);
        i++;
    }
    return (i);
}

void    ft_recursive_base(char *str, char *base, long size, long *nb)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (*str == base[i])
            break ;
        i++;
    }
    if (!base[i])
        return ;
    *nb *= size;
    *nb += i;
    str++;
    ft_recursive_base(str, base, size, nb);
}

int     ft_atoi_base(char *str, char *base)
{
    long base_size;
    long nb;
    long neg;

    base_size = (long)ft_checkbase(base);
    neg = 1;
    nb = 0;
    if (base_size < 2)
        return (0);
    while (ft_isspace(*str))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            neg *= -1;
        str++;
    }
    ft_recursive_base(str, base, base_size, &nb);
    nb *= neg;
    return ((int)nb);
}
