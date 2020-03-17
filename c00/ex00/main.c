void    ft_putchar(char c);

int     main(void)
{
    char i;

    i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
    return (0);
}
