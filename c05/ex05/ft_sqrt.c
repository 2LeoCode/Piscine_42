int     ft_sqrt(int nb)
{
    long i;

    i = 0;
    while (i * i < (long)nb)
        i++;
    if (i * i == (long)nb)
        return ((int)i);
    return (0);
}
