int     ft_iterative_power(int nb, int power)
{
    int i;

    i = (power >= 0) ? 1 : 0;
    while (power > 0)
    {
        i *= nb;
        power--;
    }
    return (i);
}
