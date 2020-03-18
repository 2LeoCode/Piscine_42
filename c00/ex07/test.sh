#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_putnbr.c
alias a="./a.exe" #.out

diff=0

function checkDiff ()
{
    ret="`a $1`"
    real=$1"<<"
    if [ $ret != $real ]
    then
        echo ./a.out
        a $1
        echo -e "\nExpected $1<< got $ret"
        diff=1
    fi
}

checkDiff 42
checkDiff -42
checkDiff 0
checkDiff 2147483647
checkDiff -2147483648

if [ $diff = 0 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff -KO"
fi
