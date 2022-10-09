#include<stdio.h>

#define ROW 2
#define COL 3


int main(void) {
	int td[][COL] = { {8,5,4}, {2,7,6} };
	int cnt = 0;

	printf("%d %d %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));
	//td �迭�� ��üũ��, td�� 0���� ������ 4 * 3 , td 1���� ������ 4 * 3 ���
	printf("%u, %u, %u\n", td, td[0], td[1]);
	//td �迭�� �ּҰ�, td[0]�� td�� �ּҰ��� ����(�����ּҰ�), td[1]�� [1][0]�� �ּҰ�
	printf("%u, %u\n", &td[0][0], &td[1][0]); //������ ������!

	**td = 10; //td[0][0] = 10;
	*td[1] = 20; //td[1][0] = 20;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++, cnt++) {
			printf("%d %d, ", *(*td + cnt), *(td[i] + j)); // ù��° �ι�° %d��°� ��� td[0][0],td[0][1],td[0][2],td[1][0]...td[1][2]������ ���
			// cnt++;
		}
		printf("\n");// �ʱⰪ�� �������� �ʾ� ������ ���� ��µ�
	}

	return 0;
}