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

int     ft_pos(char c, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (c == base[i])
            break ;
        i++;
    }
    return (i);
}

int     ft_rbase(char *str, char *base, long size)
{
    if (ft_pos(*str, base) == size)
        return (0);
    str--;
    return (ft_rbase(str, base, size) * size + ft_pos(str[1], base));
}

int     ft_atoi_base(char *str, char *base)
{
    long base_size;
    long neg;
    long nb;

    base_size = (long)ft_checkbase(base);
    neg = 1;
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
    while (ft_pos(str[1], base) != base_size)
        str++;
    nb = (long)ft_rbase(str, base, base_size) * neg;
    return ((int)nb);
}
