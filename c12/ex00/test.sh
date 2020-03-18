#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_create_elem.c
alias a=./a.exe #.out

diff=0

function checkDiff ()
{
    val="$1(null)"
    ret=`a "$1"`

    if [ "$ret" != "$val" ]
    then
        echo "./a.out "$1""
        a $1
        echo -e "\nExpected $val, got $ret"
        diff=1;
    fi
}

checkDiff 1
checkDiff 15898749
checkDiff salut
checkDiff 'ca va'

if [ $diff = 0 ]
then
    echo -e '\nOK'
else
    echo -e '\ndiff --- KO'
fi
