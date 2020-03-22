#!/bin/bash

alias a=./a.out
alias t=./test
gcc -Wall -Wextra -Werror test.c -o 'test'
gcc -Wall -Wextra -Werror main.c ft_sorted_list_merge.c

diff=0

function checkDiff ()
{
    val=`t $*`
    ret=`a $*`

    if [ "$ret" != "$val" ]
    then
        echo "./a.out $*"
        a $*
        echo "\nExpected $val got $ret"
        diff=1
    fi
}

checkDiff 1 2 3 4 5 -m 1 2 3 4 5
checkDiff 1 3 5 7 9 -m 0 2 4 6 8
checkDiff 1 2 3 4 5 -m 6 7 8
checkDiff 3 4 5 6 7 -m 0 1 2
checkDiff 1 2 3 4 5 6 7 8 9 -m 2 2 5 7 8 8 8

if [ $diff = 0 ]
then
    echo '\nOK'
else
    echo '\ndiff --- KO'
fi
