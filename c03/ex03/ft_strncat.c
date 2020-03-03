int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;
    
    i = ft_strlen(dest);
    j = 0;
    while (src[j] && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = 0;
    return (dest);
}