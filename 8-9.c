//예제 8-9
#include <stdio.h>

int main()
{
	int* pary[3] = { NULL }; //포인터 배열 pary 선언 안에 값은 x
	int i, a = 10, b = 20, c = 30;

	pary[0] = &a; //pary[0]에 a의 주소값 대입
	pary[1] = &b; //pary[1]에 b의 주소값 대입
	pary[2] = &c; //pary[2]에 c의 주소값 대입
	for (i = 0; i < 3; i++)
		printf("*pAry[%d] = %d\n", i, *pary[i]); //pAry[i]의 값 출력 즉 a, b, c 출력
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", pary[i]); //pary[i]자체가 주소를 나타내기에 '&' 필요 x
		printf("%d, %d, %d\n", a, b, c); // a,b,c,값 출력
	}

}