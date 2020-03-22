#!/bin/bash

alias a=./a.out
gcc -Wall -Wextra -Werror main.c ft_list_reverse_fun.c

diff=0

function checkDiff ()
{
    val=$(tr -d ' ' <<< "$*")
    ret=`a $*`

    if [ "$ret" != "$val" ]
    then
        echo "./a.out $*"
        a $*
        echo "\nExpected $val got $ret"
        diff=1
    fi
}

checkDiff 1 2 3 4 5 6 7 8 9
checkDiff bonjour je suis un tres gentil citoyen
checkDiff ta mere la pute
checkDiff bocal le encule j
checkDiff 0

if [ $diff = 0 ]
then
    echo '\nOK'
else
    echo '\ndiff --- KO'
fi
