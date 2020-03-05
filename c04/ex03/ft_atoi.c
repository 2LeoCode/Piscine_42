int     ft_isspace(char c)
{
    if (c == '\n' || c == '\r' || c == '\t')
        return (1);
    if (c == '\v' || c == '\f' || c == ' ')
        return (1);
    return (0);
}

int     ft_atoi(char *str)
{
    long    nb;
    long    neg;
    int     i;

    i = 0;
    neg = 1;
    nb = 0;
    while (ft_isspace(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += (long)str[i] - 48;
        i++;
    }
    nb *= neg;
    return ((int)nb);
}
