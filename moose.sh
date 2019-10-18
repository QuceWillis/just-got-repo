# Quentin Thorpe
# Fun Moose program

#!/bin/bash

left=$1
right=$2
rdiff=$right-$left
ldiff=$left-$right

if [ -z $1 -o -z $2 ]
then
echo Nothing was entered
fi

moose()
{
        if [ $left -ge 0 -a $left -le 20 ]
        then
                if [ $right -ge 0 -a $right -le 20 ]
                then
                        if [ $right -gt $left ]
                        then
                        let left=$right+$left+$rdiff
                        echo odd $left

                        elif [ $left -gt $right ]
                        then
                        let right=$left+$right+$ldiff
                        echo odd $right

                        else
                        let right=$right+$left
                        echo even $right
                        fi
                fi
        fi
}

if [ $left -eq 0 -a $right -eq 0 ]
then
        echo Not a moose
else
        moose
fi
