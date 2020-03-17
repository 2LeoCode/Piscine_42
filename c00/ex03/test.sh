#!/bin/bash

alias a=./a.exe #.out
gcc -Wall -Wextra -Werror main.c ft_print_numbers.c

diff=0
val=0123456789
if [ `a` != $val ]
then
    echo ./a.out
    echo `a`
    echo -e "\nExpected $val got `a`"
    diff=1
fi

if [ $diff = 0 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff --- KO"
fi
