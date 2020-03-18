int ft_count_if(char **tab, int length, int(*f)(char*))
{
    if (!length)
        return (0);
    if ((*f)(*tab))
        return (1 + ft_count_if(tab + 1, length - 1, f));
    return (ft_count_if(tab + 1, length - 1, f));
}
