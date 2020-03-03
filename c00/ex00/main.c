void    ft_putchar(char c);

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        ft_putchar('a');
    else
        while (i < argc)
        {
            ft_putchar(argv[i][0]);
            ft_putchar('\n');
            i++;
        }
    return (0);
}
