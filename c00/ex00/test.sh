#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_putchar.c
alias a=./a.exe
#./a.out for mac of course

val=abcdefghijklmnopqrstuvwxyz
diff=0

if [ `a` != $val ]
then
    echo ./a.out
    echo `a`
    echo "Expected $val got `a`"
    diff=1
fi

if [ $diff = 1 ]
then
    echo -e "\ndiff --- KO"
else
    echo -e "\nOK"
fi
