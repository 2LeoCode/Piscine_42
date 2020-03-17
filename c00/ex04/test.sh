#!/bin/bash

alias a=./a.exe #.out
gcc -Wall -Wextra -Werror main.c ft_is_negative.c

diff=0
val=NPPNP
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
