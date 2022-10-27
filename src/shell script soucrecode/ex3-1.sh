#!/bin/sh/ 
NUM=$1

if [ -z "$NUM" ]
then
	NUM=10
fi

for var in `seq -w 1 $NUM`
do
	echo "hello world"
done

exit 0
