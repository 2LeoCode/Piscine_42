#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_is_sort.c
alias a="./a.exe" #.out

diff=0

function checkDiff ()
{
    val=$1
    args=${*:2}
    ret=`a $args`
    if [ $ret != $val ]
    then
        echo ./a.out $args
        a $args
        echo -e "\nExpected $1 got $ret"
        diff=1
    fi
}

checkDiff 1 0 1 2 3 4 5
checkDiff 0 5 4 3 2 1 0
checkDiff 1 -53264 -2458 -365 0 58 477 698777 22222222
checkDiff 0 -53264 -2458 -365 0 477 58 698777 22222222
checkDiff 1 -95555 18184181 1888181811
checkDiff 1 5
checkDiff 0 8456987 1
checkDiff 0 8 0 9 84

if [ $diff = 0 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff -KO"
fi
