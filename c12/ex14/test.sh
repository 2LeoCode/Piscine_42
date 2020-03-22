#!/bin/bash

alias a=./a.out
alias t=./test
gcc -Wall -Wextra -Werror main.c ft_list_sort.c
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

checkDiff 9 8 7 6 5 4 3 2 1
checkDiff 1 2 3 4 5 6 7 8 9
checkDiff 9 5 8 3 4 2 6 7 1
checkDiff 1 2
checkDiff 2 1
checkDiff def abc efg aab aac bbc
checkDiff 4 2 2 4 4 2 2 4 3
checkDiff dwihi whdw gdwuudywgydfvxyvuxihw xjowj oxjwod iwhdihw id gwigudwdkp wjdowhi9di

if [ $diff = 0 ]
then
    echo '\nOK'
else
    echo '\ndiff --- KO'
fi
