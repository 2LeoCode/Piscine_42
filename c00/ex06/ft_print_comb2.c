#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(char *str)
{
    ft_putchar(str[0] + 48);
    ft_putchar(str[1] + 48);
    ft_putchar(' ');
    ft_putchar(str[2] + 48);
    ft_putchar(str[3] + 48);
}

void    ft_print2(char *nums, int n)
{
    char str[4];

    str[0] = nums[0] / 10;
    str[1] = nums[0] % 10;
    str[2] = nums[1] / 10;
    str[3] = nums[1] % 10;
    ft_print_numbers(str);
    if (n != 2)
    {
        ft_putchar(',');
        if (n)
            nums[1]++;
        else
        {
            nums[0]++;
            nums[1] = nums[0] + 1;
        }
    }
}

void    ft_print_comb2(void)
{
    char tab[2];

    tab[0] = 0;
    tab[1] = 1;
    while(tab[0] != 98)
    {
        while(tab[1] != 99)
            ft_print2(tab, 1);
        ft_print2(tab, 0);
    }
    ft_print2(tab, 2);
}