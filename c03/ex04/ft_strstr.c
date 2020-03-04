#define NULL (void*)0

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (s1[i] - s2[i]);
    return (0);
}

char    *ft_strstr(char *str, char *to_find)
{
    int             i;
    unsigned int    tofind_size;

    i = 0;
    tofind_size = ft_strlen(to_find);
    while (str[i])
    {
        if (!ft_strncmp(&str[i], to_find, tofind_size))
            return (&str[i]);
        i++;
    }
    return (NULL);
}
