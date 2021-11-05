#!/bin/zsh
score=0
for file in `ls ./in`
do
    file="./in/"$file
    # echo $file
    cur=`(cargo run --release --bin tester ./a0.out < $file 1>/dev/null 2> >(grep Score)) | awk '{print $NF}'`
    # echo $cur
    score=$(($score+$cur))
done
echo "ori: "$score

score=0
for file in `ls ./in`
do
    file="./in/"$file
    # echo $file
    cur=`(cargo run --release --bin tester ./a1.out < $file 1>/dev/null 2> >(grep Score)) | awk '{print $NF}'`
    # echo $cur
    score=$(($score+$cur))
done
echo "opt1: "$score

score=0
for file in `ls ./in`
do
    file="./in/"$file
    # echo $file
    cur=`(cargo run --release --bin tester ./a2.out < $file 1>/dev/null 2> >(grep Score)) | awk '{print $NF}'`
    # echo $cur
    score=$(($score+$cur))
done
echo "opt2: "$score