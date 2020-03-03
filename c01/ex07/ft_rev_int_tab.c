void    ft_swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size / 2)
    {
        ft_swap(&tab[i], &tab[(size - 1) - i]);
        i++;
    }
}
