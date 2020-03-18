#include "ft_list.h"
#include <stdio.h>

t_list  *ft_create_elem(void *data);

int     main(int argc, char **argv)
{
    t_list *test;
    if (argc != 2)
    {
        printf("Usage: ft_create_elem 'value'");
        return (0);
    }
    test = ft_create_elem(argv[1]);
    printf("%s%s", (char*)test->data, (char*)test->next);
    return (0);
}
