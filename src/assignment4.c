#include<stdio.h>

void disp_menu(); //disp_menu�� �����Ѵ�
double add(double num1, double num2); //add�Լ��� �����Ѵ�
double sub(double num1, double num2); //sub�Լ��� �����Ѵ�
double mul(double num1, double num2); //mul�Լ��� �����Ѵ�
double div(double num1, double num2); //div�Լ��� �����Ѵ�

int main() {
	double num1, num2;  //�Ǽ������� ����(num1, num2)�� ���� 
	int sum; //���������� sum�̶�� ������ ���� 
	while (1) {
		disp_menu(); //disp_menu �Լ��� ȣ���Ѵ�  
		scanf_s("%d", &sum); //sum�� ���� �Է¹޴´�

		printf("�Ǽ��� �Է��ϼ��� :"); //"�Ǽ��� �Է��ϼ���"�� ����Ѵ�
		scanf_s("%lf", &num1); //num1�� ���� �Է¹޴´�
		printf("�Ǽ��� �Է��ϼ��� :"); //"�Ǽ��� �Է��ϼ���"�� ����Ѵ�
		scanf_s("%lf", &num2); //num2�� ���� �Է¹޴´�

		if (sum == 1) { //1�� ��
			printf("������=%lf\n", add(num1, num2)); //������ �Ͽ��� �� ����� ���
		}
		else if (sum == 2) { //2�� ��
			printf("������=%lf\n", sub(num1, num2)); //������ �Ͽ��� �� ����� ���
		}
		else if (sum == 3) { //3�� ��
			printf("������=%lf\n", mul(num1, num2)); //���ϱ⸦ �Ͽ��� �� ����� ���
		}
		else if (sum == 4) { //4�� ��
			if (num2 == 0) { //num2�� 0 �� �� 
				printf("�߸��� �Է��Դϴ�.\n"); //"�߸��� �Է��Դϴ�"�� ���
			}
			else
			printf("������=%lf\n", div(num1, num2)); //�������� �� ����� ���
		}
		else  //�ƿ� �ٸ� ������ ��
			printf("�߸��� �Է��Դϴ�.\n"); //"�߸��� �Է��Դϴ�" ���
	}
	return 0;
}
void disp_menu() { //disp_menu�Լ��� �����Ѵ�
	printf("1. ����\n2. ����\n3. ����\n4. ������\n");  //1~4 ������ ���ڸ� ����Ѵ�
	printf("��ȣ�� �Է��ϼ��� :"); //��ȣ �Է��� ����Ѵ�
}

double add(double num1, double num2) {   //�Ǽ������� add(����) �Լ��� �����Ѵ�
	return num1 + num2;   //num1+num2�� ��ȯ
}
double sub(double num1, double num2) {  //�Ǽ������� sub(����) �Լ��� �����Ѵ�
	return num1 - num2;  //num1-num2�� ��ȯ
}
double mul(double num1, double num2) { //�Ǽ������� mul(����) �Լ��� �����Ѵ�
	return num1 * num2; //num1*num2�� ��ȯ
}
double div(double num1, double num2) { //�Ǽ������� div(������) �Լ��� �����Ѵ�
	return num1 / num2; //num1 / num2�� ��ȯ
}