int     ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i <= nb / i)
    {
        if (!(nb % i))
            return (0);
        i++;
    }
    return ((nb > 1) ? 1 : 0);
}
