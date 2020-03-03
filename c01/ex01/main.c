#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int     main(void)
{
    int i;
    int *p;
    int **pp;
    int ***ppp;
    int ****pppp;
    int *****ppppp;
    int ******pppppp;
    int *******ppppppp;
    int ********pppppppp;
    int *********ppppppppp;

    i = 0;
    p = &i;
    pp = &p;
    ppp = &pp;
    pppp = &ppp;
    ppppp = &pppp;
    pppppp = &ppppp;
    ppppppp = &pppppp;
    pppppppp = &ppppppp;
    ppppppppp = &pppppppp;
    ft_ultimate_ft(ppppppppp);
    if (i == 42)
        printf("\t[ OK ]\t");
    else
        printf("\t[ KO ]\t");
    printf("Expected 42, got %d", i);
    return (0);
}
