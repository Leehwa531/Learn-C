#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	int max, min;
	printf("������ ���� �Է�1 :");
	scanf("%d", &x);
	printf("������ ���� �Է�1 :");
	scanf("%d", &y);
	(x > y) ? (max = x, min = y) : (max = y, min = x);
	printf("���� %d �̰� �������� %d �Դϴ�.", max / min, max % min);
}