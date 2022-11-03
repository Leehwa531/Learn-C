//다음을 참고로 표준입력으로 받은 세 개의 실수를 배열로 선언하고 사칙연산을 수행하는 프로그램을 작성하시오.

#include <stdio.h>

void add(double num[], double *result);
void subtract(double num[], double* result);
void multiply(double num[], double* result);

int main()
{
	double num[3] = { 0 };		//배열 3개짜리 선언
	char index;			//연산자 값
	double result = 0;		//result값 0으로 초기화 해야함

	printf("세개의 실수를 입력 : ");
	for (int i = 0; i < 3; i++) {
		scanf_s("%lf", &num[i]);
	}

	printf("연산자 입력(+, -, *) : ");
	scanf_s(" %c", &index, 1);

	//index값(char형)을 if문으로 +,-,/,else로 나누기
	if (index == '+')
		add(num, &result);
	else if (index == '-')
		subtract(num, &result);
	else if (index == '*')
		multiply(num, &result);
	else
		printf("잘못된 입력입니다.");
	
	printf("%c의 결과는 %lf", index, result);
	
	return 0;
	
}
void add(double num[], double* result) {
	for (int i = 0; i < 3; i++)
		*result += num[i]; // a + b + c
}
void subtract(double num[], double* result) {
	*result = num[0];		//첫번째 값 대입 a-b-c
	for (int i = 1; i < 3; i++)
		*result -= num[i];		//첫번째 값에 b,c값 빼주기
}
void multiply(double num[], double* result) {
	*result = num[0]; //곱하기는 첫번째 값 미리 넣어주기
	for (int i = 1; i < 3; i++)
		*result *= num[i]; //첫번째에 b, c 입력값 곱해주기
}