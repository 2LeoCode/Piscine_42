int     ft_iterative_factorial(int nb)
{
    int i;
    int nb_fin;

    i = 2;
    nb_fin = 1;
    if (nb < 1)
        return (0);
    while (i <= nb)
    {
        nb_fin *= i;
        i++;
    }
    return (nb_fin);
}
