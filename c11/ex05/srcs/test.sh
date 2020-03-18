#!/bin/bash
alias do-op=./do-op.exe

function check_dif ()
{
    if [ $1 != $2 ]
    then
        echo "Expected $2, got $1"
        diff=1
    fi
}

function check_div_zero ()
{
    cmd="$(do-op "$1" "$2" "$3")"
    if [ "$cmd" != "Stop : division by zero" ]
    then
        echo "./do-op '$1' '$2' '$3'"
        echo $cmd
        echo "Expected 'Stop : division by zero' , got '$cmd'"
        diff=1
    fi
}

function check_mod_zero ()
{
    cmd="$(do-op "$1" "$2" "$3")"
    if [ "$cmd" != "Stop : modulo by zero" ]
    then
        echo "./do-op '$1' '$2' '$3'"
        echo $cmd
        echo "Expected 'Stop : modulo by zero' , got '$cmd'"
        diff=1
    fi
}

function check_nul ()
{
    if [ ! -z $1 ]
    then
        echo "Expected nothing, got something"
        diff=1
    fi
}

diff=0
check_nul       $(do-op)
check_dif       $(do-op 5 + -b5) 5
check_nul       $(do-op 54 +)
check_div_zero  "  ---+-++-56 8b4587hfg " / "hey bb"
check_dif       $(do-op 2147483647 "*" 10000) 21474836470000
check_dif       $(do-op "  ---+-+-+33654" / " ---++85") 395
check_dif       $(do-op "   ----8488" % ++++++58) 20
check_dif       $(do-op + 8 6) 0
check_dif       $(do-op 0 "*" 0) 0
check_dif       $(do-op tartiflette + 5) 5
check_mod_zero  5 % tartiflette
if [ $diff != 1 ]
then
    echo -e "\nOK"
else
    echo -e "\ndiff --- KO"
fi
