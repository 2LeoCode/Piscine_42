int     ft_recursive_power(int nb, int power)
{
    if (power <= 0)
        return ((!power) ? 1 : 0);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}
