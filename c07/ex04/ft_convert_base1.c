int     ft_isspace(char c)
{
    if (c == '\n' || c == '\r' || c == '\t')
        return (1);
    if (c == '\v' || c == '\f' || c == ' ')
        return (1);
    return (0);
}

int     ft_size(int nb, int base_size)
{
    if (!nb)
        return (0);
    return (1 + ft_size(nb / base_size, base_size));
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
    if (!*base)
        return (0);
    return ((*base == c) ? (0) : (1 + ft_pos(c, base + 1)));
}

int     ft_rbase(char *str, char *base, long size)
{
    if (ft_pos(*str, base) == size)
        return (0);
    return (ft_rbase(str - 1, base, size) * size + ft_pos(*str, base));
}
