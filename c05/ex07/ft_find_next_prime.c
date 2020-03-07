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

int     ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb))
        return(nb);
    ft_find_next_prime(nb + 1);
}
