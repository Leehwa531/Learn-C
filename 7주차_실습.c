//������ ����� ǥ���Է����� ���� �� ���� �Ǽ��� �迭�� �����ϰ� ��Ģ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

void add(double num[], double *result);
void subtract(double num[], double* result);
void multiply(double num[], double* result);

int main()
{
	double num[3] = { 0 };		//�迭 3��¥�� ����
	char index;			//������ ��
	double result = 0;		//result�� 0���� �ʱ�ȭ �ؾ���

	printf("������ �Ǽ��� �Է� : ");
	for (int i = 0; i < 3; i++) {
		scanf_s("%lf", &num[i]);
	}

	printf("������ �Է�(+, -, *) : ");
	scanf_s(" %c", &index, 1);

	//index��(char��)�� if������ +,-,/,else�� ������
	if (index == '+')
		add(num, &result);
	else if (index == '-')
		subtract(num, &result);
	else if (index == '*')
		multiply(num, &result);
	else
		printf("�߸��� �Է��Դϴ�.");
	
	printf("%c�� ����� %lf", index, result);
	
	return 0;
	
}
void add(double num[], double* result) {
	for (int i = 0; i < 3; i++)
		*result += num[i]; // a + b + c
}
void subtract(double num[], double* result) {
	*result = num[0];		//ù��° �� ���� a-b-c
	for (int i = 1; i < 3; i++)
		*result -= num[i];		//ù��° ���� b,c�� ���ֱ�
}
void multiply(double num[], double* result) {
	*result = num[0]; //���ϱ�� ù��° �� �̸� �־��ֱ�
	for (int i = 1; i < 3; i++)
		*result *= num[i]; //ù��°�� b, c �Է°� �����ֱ�
}