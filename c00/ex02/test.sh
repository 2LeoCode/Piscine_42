#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_print_reverse_alphabet.c
alias a=./a.exe

diff=0
val=zyxwvutsrqponmlkjihgfedcba

if [ `a` != $val ]
then
    echo "./a.out"
    echo `a`
    echo "Expected $val got `a`"
    diff=1
fi

if [ $diff = 0 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff --- KO"
fi
