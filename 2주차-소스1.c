//6���� �����͸� �Է� �޾� �Լ� �� �迭�� �հ� ����� ���ϴ� ����
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
	printf("��: %.0f, ���: %.3f\n", total, total /(ROWSIZE * COLSIZE));
	output(td);

	return 0;
}

void input(int td[ROWSIZE][COLSIZE])
{
	printf("6���� ������ �Է� : ");
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
	printf("�ݺ��� for�� �̿��Ͽ� ���\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("%d  ", td[i][j]);
		puts("");
	}
	puts("");
}