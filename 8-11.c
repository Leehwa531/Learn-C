//���� 8-11
//file : array.c

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int i, sum = 0;
	int score[] = { 89, 98, 76 };

	printf("÷��	�ּ�	���尪\n");
	//�迭 �̸� score�� ����� �ּҿ� ���Ұ� ����
	for (i = 0; i < SIZE; i++)
		printf("%2d %10u %6d\n", i, (score + 1), *(score + i)); //(score + 1)�� �ּҰ����, *(score + i)�� i��° �迭�� ��
	puts("");

	//�迭 �̸� score�� ù ��° ������ �ּ�
	printf("score: %u\n", score); // ���� ����� �׳� score�� score[0]�� �ּҿ� ����.
	printf("&score[0]: %u\n", &score[0]); // �Ȱ��� ���Դϴ�. ù��° �ּҰ�!

	return 0;
}