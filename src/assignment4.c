#include<stdio.h>

void disp_menu(); //disp_menu를 선언한다
double add(double num3, double num4); //add함수를 선언한다
double sub(double num3, double num4); //sub함수를 선언한다
double mul(double num3, double num4); //mul함수를 선언한다
double div(double num3, double num4); //div함수를 선언한다

int main() {
	double num3, num4;  //실수형으로 숫자(num3, num4)를 지정 
	int sum; //정수형으로 sum이라는 변수를 지정 
	while (1) {
		disp_menu(); //disp_menu 함수를 호출한다  
		scanf_s("%d", &sum); //sum의 값을 입력받는다

		printf("실수를 입력하세요 :"); //"실수를 입력하세요"를 출력한다
		scanf_s("%lf", &num3); //num3의 값을 입력받는다
		printf("실수를 입력하세요 :"); //"실수를 입력하세요"를 출력한다
		scanf_s("%lf", &num4); //num4의 값을 입력받는다

		if (sum == 1) { //1일 때
			printf("연산결과=%lf\n", add(num3, num4)); //덧셈을 하였을 때 결과를 출력
		}
		else if (sum == 2) { //2일 때
			printf("연산결과=%lf\n", sub(num3, num4)); //뺄셈을 하였을 때 결과를 출력
		}
		else if (sum == 3) { //3일 때
			printf("연산결과=%lf\n", mul(num3, num4)); //곱하기를 하였을 때 결과를 출력
		}
		else if (sum == 4) { //4일 때
			if (num4 == 0) { //num4가 0 일 때 
				printf("잘못된 입력입니다.\n"); //"잘못된 입력입니다"를 출력
			}
			else
			printf("연산결과=%lf\n", div(num1, num4)); //나누었을 때 결과를 출력
		}
		else  //아예 다른 숫자일 때
			printf("잘못된 입력입니다.\n"); //"잘못된 입력입니다" 출력
	}
	return 0;
}
void disp_menu() { //disp_menu함수를 정의한다
	printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n");  //1~4 까지의 숫자를 출력한다
	printf("번호를 입력하세요 :"); //번호 입력을 출력한다
}

double add(double num3, double num4) {   //실수형으로 add(덧셈) 함수를 정의한다
	return num3 + num4;   //num3+num4를 반환
}
double sub(double num3, double num4) {  //실수형으로 sub(뺄셈) 함수를 정의한다
	return num3 - num4;  //num3-num4를 반환
}
double mul(double num3, double num4) { //실수형으로 mul(곱셈) 함수를 정의한다
	return num3 * num4; //num3*num4를 반환
}
double div(double num3, double num4) { //실수형으로 div(나눗셈) 함수를 정의한다
	return num3 / num4; //num3 / num4를 반환
}
