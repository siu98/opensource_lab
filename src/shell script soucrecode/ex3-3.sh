#!/bin/sh
weight=$1
height=$2
m_height=$( echo "scale=1; $height / 100" |bc )
BMI=$( echo "scale=1; $weight / ($m_height * $m_height)" |bc)
if [ `echo "$BMI < 18.5" |bc` -eq 1 ]
       then
	echo "저체중 입니다."
else
    if [ `echo "$BMI >= 23" |bc` -eq 1 ] 
	then
		echo "과체중 입니다."
    else
		echo "정상체중 입니다."
	fi
fi
exit 0
