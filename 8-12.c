#include<stdio.h>

#define ROW 2
#define COL 3


int main(void) {
	int td[][COL] = { {8,5,4}, {2,7,6} };
	int cnt = 0;

	printf("%d %d %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));
	//td 배열의 전체크기, td의 0행의 사이즈 4 * 3 , td 1행의 사이즈 4 * 3 출력
	printf("%u, %u, %u\n", td, td[0], td[1]);
	//td 배열의 주소값, td[0]은 td의 주소값과 같음(시작주소값), td[1]은 [1][0]의 주소값
	printf("%u, %u\n", &td[0][0], &td[1][0]); //위에랑 같은말!

	**td = 10; //td[0][0] = 10;
	*td[1] = 20; //td[1][0] = 20;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++, cnt++) {
			printf("%d %d, ", *(*td + cnt), *(td[i] + j)); // 첫번째 두번째 %d출력값 모두 td[0][0],td[0][1],td[0][2],td[1][0]...td[1][2]순으로 출력
			// cnt++;
		}
		printf("\n");// 초기값을 저장하지 않아 쓰레기 값이 출력됨
	}

	return 0;
}