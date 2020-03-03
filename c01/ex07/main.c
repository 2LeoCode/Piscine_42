#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

void    ft_test(int *tab, int *tabcomp, int size)
{
    int i;

    i = 0;
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
        printf("[%d] ", tab[i]);
        if (tab[i] != tabcomp[i])
        {
            printf("\n\t[ KO ]\t");
            break ;
        }
        i++;
    }
    if (i == size)
        printf("\n\t[ OK ]\n\n");
    else
        printf("Expected [%d] at case [%d], got [%d]\n\n", tabcomp[i], i, tab[i]);
}

int     main(void)
{
    int tab[4];
    int tab2[5];
    int tab3[1000];
    int tabcomp[4];
    int tabcomp2[5];
    int tabcomp3[1000];
    int i;

    i = 0;
    while (i < 1000)
    {
        if (i < 4)
        {
            tabcomp[i] = 3 - i;
            tab[i] = i;
        }
        if (i < 5)
        {
            tabcomp2[i] = 4 - i;
            tab2[i] = i;
        }
        tabcomp3[i] = 999 - i;
        tab3[i] = i;
        i++;
    }
    ft_test(tab, tabcomp, 4);
    ft_test(tab2, tabcomp2, 5);
    ft_test(tab3, tabcomp3, 1000);
    return (0);
}
