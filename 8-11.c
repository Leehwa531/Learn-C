//예제 8-11
//file : array.c

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int i, sum = 0;
	int score[] = { 89, 98, 76 };

	printf("첨자	주소	저장값\n");
	//배열 이름 score를 사용한 주소와 원소값 참조
	for (i = 0; i < SIZE; i++)
		printf("%2d %10u %6d\n", i, (score + 1), *(score + i)); //(score + 1)는 주소값출력, *(score + i)는 i번째 배열의 값
	puts("");

	//배열 이름 score는 첫 번째 원소의 주소
	printf("score: %u\n", score); // 위에 말대로 그냥 score은 score[0]의 주소와 같다.
	printf("&score[0]: %u\n", &score[0]); // 똑같은 말입니다. 첫번째 주소값!

	return 0;
}