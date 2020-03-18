void ft_foreach(int *tab, int length, void(*f)(int))
{
    if (!length)
        return ;
    (*f)(*tab);
    ft_foreach(tab + 1, length - 1, f);
}
