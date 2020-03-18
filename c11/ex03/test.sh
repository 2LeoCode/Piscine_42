#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_count_if.c
alias a="./a.exe" #.out

diff=0

function checkDiff ()
{
    val=$1
    args=${*#$1}
    ret=`a $args`
    if [ $ret != $val ]
    then
        echo ./a.out $args
        a $args
        echo -e "\nExpected $1 got $ret"
        diff=1
    fi
}

checkDiff 0 46954 964 996 4 964 996 9
checkDiff 1 lol dz8 ddzd7 777 4
checkDiff 5 lol mdr encule fils de pute4
checkDiff 2 zdz kzo54dk oz485 zd zdz7
checkDiff 6 dz dzh bzddu bzudbzbd ubd uzudzbudz
checkDiff 0 d1 d2 d5 d8 d7 4d 2d 4d89d 4d 8d 78d
checkDiff 8 zd 269dz dz zdd59zd dzd56z5z dzd zd 489484 a4 4sa894a aaa s dzub lol
checkDiff 1 "" a

if [ $diff = 0 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff -KO"
fi
