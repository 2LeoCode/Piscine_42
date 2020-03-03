void    ft_swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    
    i = 1;
    while (i < size)
    {
        if(tab[0] > tab[i])
            ft_swap(&tab[0], &tab[i]);
        i++;
    }
    if (size > 1)
        ft_sort_int_tab(&tab[1], size - 1);
}
