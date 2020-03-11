#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    if (point.x != 42 || point.y != 21)
        printf("\t[ KO ]\t");
    else
        printf("\t[ OK ]\t");
    printf("Expected [42] [21], got [%d] [%d]", point.x, point.y);
    return (0);
}
