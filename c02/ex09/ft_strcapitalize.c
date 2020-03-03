char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

int     ft_is_alphanumeric(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

char    *ft_strcapitalize(char *str)
{
    int     i;

    ft_strlowcase(str);
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (!i || !ft_is_alphanumeric(str[i - 1]))
                str[i] -= 32;
        }
        i++;
    }
    return (str);
}
