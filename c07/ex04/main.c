char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

int     main(void)
{
    char base_from[] = "0123";
    char base_to[] = " jul";
    char nbr[] = "  \n\t\r --+1212123";
    char *test = ft_convert_base(nbr, base_from, base_to);
    printf("%s", test);
    return (0);
}
