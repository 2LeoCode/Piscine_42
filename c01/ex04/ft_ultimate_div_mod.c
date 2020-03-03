void    ft_ultimate_div_mod(int *a, int *b)
{
    int i;

    i = *a;
    *a /= *b;
    *b = i % *b;
}
