#ifndef HEXDUMP_H

# define HEXDUMP_H
# define COL "\e[38;5;159m|\e[0m"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>
#include <stdlib.h>

typedef unsigned long long int t_ullint;

t_ullint    g_addr;
char        g_straddr[9];
int         ft_getsize(char *path);
void        ft_fenter(int file, char *path);
void        ft_fputs(char *path, char *str, int erase);
int         ft_read(int file, char *str, int size);
void        ft_filedump();
void        ft_putchar(char c);
void        ft_putstr(char *str);
int         ft_strncmp(char *s1, char *s2, int n);
void        ft_put_limit();
int         ft_putstr16(char *str);
void        ft_print_hexa(char *str, int index, int len);
void        ft_print_adress(t_ullint addr);
int         ft_hexdump(char *str, int size);

#endif