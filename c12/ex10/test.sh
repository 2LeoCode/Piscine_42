#!/bin/bash

alias a=./a.out
alias t=./test
gcc -Wall -Wextra -Werror main.c ft_list_foreach_if.c
gcc -Wall -Wextra -Werror test.c -o 'test'
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

checkDiff 1 2 3 4 5 N 7 N 9
checkDiff 1 2 3 4 5 6 7 8 9
checkDiff 0
checkDiff bonjour je N un tres gentil N
checkDiff N mere la pute
checkDiff j encule N N
checkDiff N N x N x x
checkDiff N N N x x x
checkDiff N
checkDiff x x x N N N

if [ $diff = 0 ]
then
    echo '\nOK'
else
    echo '\ndiff --- KO'
fi
