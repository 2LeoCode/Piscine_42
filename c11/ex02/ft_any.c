int ft_any(char **tab, int(*f)(char*))
{
    if (!*tab)
        return (0);
    if ((*f)(*tab))
        return (1);
    return (ft_any(tab + 1, f));
}
