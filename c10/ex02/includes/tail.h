#ifndef TAIL_H

# define TAIL_H
# define FAILURE -1
# define SUCCESS 0
# define ERR 2
# define IN 1

void    ft_putfilename(char *path, int pos, int first);
void    ft_putstr(char *str, int where);
int     ft_atoi_tail(char *str);
int     ft_checknum(char *str);
int     ft_filesize(int fd, char *path);
void    ft_puterr(int err, char *arg);
void    ft_open_err(int err, char *arg);
void    ft_size_err(char *arg);
void    ft_puterr(int err, char *arg);
int     g_err;

#endif
