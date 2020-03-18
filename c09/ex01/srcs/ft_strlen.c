int     ft_strlen(char *str)
{
    return ((!str) ? (0) : (1 + ft_strlen(str + 1)));
}
