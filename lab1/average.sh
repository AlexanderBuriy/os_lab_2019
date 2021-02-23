#!/bin/bash
sum=0
echo $#
for item in "$@"
do
    sum=$[$sum+$item]
done
if [ $# -eq 0 ]
then
    echo $[$sum/1]        
else 
    echo $[$sum/$#]
fi
