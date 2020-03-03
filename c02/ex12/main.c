#include <stdio.h>
#include <stdlib.h>

void    *ft_print_memory(void *addr, unsigned int size);

int     main(void)
{
    char tab[] = "\n\t\vOn m'appelle l'ovni\n\f\vTUTUTUTUTU\v\n\f\t+++\t\v\fOn m'appelle l'ovni\n\t\v\n\fTUTUTUTUTU\f\vOn m'appelle l'ovni\n\f\t\t\v\fL'OVNI\n";
    ft_print_memory(tab, 70);
    return (0);
}
