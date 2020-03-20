#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_list_push_back.c
alias a=./a.exe #.out

diff=0

function checkDiff ()
{
    val=$(tr -d ' ' <<< "$*")
    ret=`a $* |sed 's/ //g'`

    if [ "$ret" != "$val" ]
    then
        echo "./a.out $*"
        a $*
        echo -e "\nExpected $val, got $ret"
        diff=1;
    fi
}

checkDiff 1 2 3 4 5 6 7 8 9
checkDiff bonjour je suis un grand amateur de bonne weed
checkDiff j encule le systeme
checkDiff les condes niquez vos races 158 fois
checkDiff nique
checkDiff la bac

if [ $diff = 0 ]
then
    echo -e '\nOK'
else
    echo -e '\ndiff --- KO'
fi
