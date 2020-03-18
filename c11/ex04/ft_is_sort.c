int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    if (!(length - 1))
        return (1);
    if ((*f)(*tab, tab[1]) > 0)
        return (0);
    return (ft_is_sort(tab + 1, length - 1, f));
}
