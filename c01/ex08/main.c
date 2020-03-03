#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

void    ft_test(int *tab, int size)
{
    int i;

    i = 0;
    ft_sort_int_tab(tab, size);
    while (i < size - 1)
    {
        printf("[%d] ", tab[i]);
        if (tab[i] > tab[i + 1])
        {
            printf("\n\t[ KO ]\t");
            break ;
        }
        i++;
    }
    if (i == size - 1)
        printf("\n\t[ OK ]\n\n");
    else
        printf("At case [%d], [%d] is bigger than [%d]\n\n", i, tab[i], tab[i + 1]);
}

int     main(void)
{
    int tab1[5] = {854, 24, 88, 89, 348};
    int tab2[10] = {589, 426, 831, 237, 726, 214, 885, 746, 932, 512};
    int tab3[20] = {456, 258, 941, 357, 846, 456, 921, 135, 751, 214, 843, 628, 731, 108, 204, 637, 791, 347, 146, 932};
    ft_test(tab1, 5);
    ft_test(tab2, 10);
    ft_test(tab3, 20);
    return (0);
}
