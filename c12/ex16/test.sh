#!/bin/bash

alias a=./a.out
alias t=./test
gcc -Wall -Wextra -Werror test.c -o 'test'
gcc -Wall -Wextra -Werror main.c ft_sorted_list_insert.c ft_create_elem.c

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

checkDiff 1 2 3 4 5 6 7 8 9 -i 4
checkDiff abc bcd cde def efg fgh -i cce
checkDiff 1 2 3 4 5 6 7 8 9 -i 0
checkDiff 0 1 2 3 4 5 6 7 8 -i 9

if [ $diff = 0 ]
then
    echo '\nOK'
else
    echo '\ndiff --- KO'
fi
