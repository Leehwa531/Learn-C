#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	int max, min;
	printf("임의의 정수 입력1 :");
	scanf("%d", &x);
	printf("임의의 정수 입력1 :");
	scanf("%d", &y);
	(x > y) ? (max = x, min = y) : (max = y, min = x);
	printf("몫은 %d 이고 나머지는 %d 입니다.", max / min, max % min);
}