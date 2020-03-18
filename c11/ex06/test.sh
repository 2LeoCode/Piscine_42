#!/bin/bash

gcc -Wall -Wextra -Werror main.c ft_sort_string_tab.c
alias a="./a.exe" #.out

diff=0

function checkDiff ()
{
    ret=`a $*`
    if [ $ret != 1 ]
    then
        echo ./a.out $*
        a $*
        echo -e "\nExpected 1 got $ret (array not sorted)"
        diff=1
    fi
}

checkDiff def cbd abc thc zyx bcd
checkDiff 8 4 2 1 3 5 4 8 7 6 5 9 7 8 4 1
checkDiff 0
checkDiff zdzdz 'd8z8*87d*/g7r*gdv' 'f7d/zc' dzd7 '/z7d47' 
checkDiff zdji zhd_iz ghudgz uydgyz fgdtyzfg d-yfz-fd-yzf 'dfz-' d-dzfdkgzkdhzjk
checkDiff 'dz9d+' 'z96d+z+d5+z' '5+d5+z65d+6z+d+z9d+6' '+zd65+z56+d5' '+d5z+d5ddd' dd '+zd+zdddd' d z

if [ $diff = 0 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff -KO"
fi
