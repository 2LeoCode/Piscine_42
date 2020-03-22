#!/bin/bash

alias a=./a.out
alias t=./test
gcc -Wall -Wextra -Werror main.c ft_list_merge.c
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

checkDiff 1 2 3 4 5 -c 6 7 8 9
checkDiff 1 2 3 4 5 6 7 -c 9
checkDiff -c 1 2 3 4 5
checkDiff 0 1 2 3 4 5
checkDiff bonjour -c je suis un tres gentil monsieur
checkDiff ta mere -c la pute
checkDiff j encule -c le bocal
checkDiff abc 123 -c abc 123
checkDiff gros fils de -c pute
checkDiff psg -c pute sur gazon
checkDiff vraiment des putes -c

if [ $diff = 0 ]
then
    echo '\nOK'
else
    echo '\ndiff --- KO'
fi
