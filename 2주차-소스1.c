//6개의 데이터를 입력 받아 함수 및 배열로 합과 평균을 구하는 문제
#define ROWSIZE 2
#define COLSIZE 3

#include <stdio.h>

void input(int td[ROWSIZE][COLSIZE]);
double sum(int td[ROWSIZE][COLSIZE]);
void output(int td[ROWSIZE][COLSIZE]);

int main()
{
	int td[ROWSIZE][COLSIZE];

	input(td);
	double total = sum(td);
	printf("합: %.0f, 평균: %.3f\n", total, total /(ROWSIZE * COLSIZE));
	output(td);

	return 0;
}

void input(int td[ROWSIZE][COLSIZE])
{
	printf("6개의 데이터 입력 : ");
	for (int i = 0; i < ROWSIZE; i++)
		for (int j = 0; j < COLSIZE; j++)
			scanf_s("%d", &td[i][j]);
	puts("");
}

double sum(int td[ROWSIZE][COLSIZE])
{
	int sum = 0;
	for (int i = 0; i < ROWSIZE; i++)
		for (int j = 0; j < COLSIZE; j++)
			sum += td[i][j];

	return sum;
}

void output(int td[ROWSIZE][COLSIZE])
{
	printf("반복문 for를 이용하여 출력\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("%d  ", td[i][j]);
		puts("");
	}
	puts("");
}