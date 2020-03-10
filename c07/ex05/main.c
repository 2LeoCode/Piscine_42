#include <stdio.h>

char    **ft_split(char *str, char *charset);

int     main(void)
{
    char    tab[] = "<--><-->Bonjour, je m'appelle Jean-Jaques !<-->J'aime les merguez<--><--><-->Surtout<-->Quand elles sont bien dorees<-->Au barbecue<--><-->";
    char    charset[] = "<-->";
    char    **test;
    int     i;

    test = ft_split(tab, charset);
    i = 0;
    while (test[i + 1])
    {
        printf("%s\n", test[i]);
        i++;
    }
    printf("%s", test[i]);
    return (0);
}
