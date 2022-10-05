//이차원 배열 초기화를 이용한 성적 처리 실습 예제 7-5
//#define ROWSIZE 4
//#define COLSIZE 2
//
//#include <stdio.h>
//
//void input(int score[][COLSIZE], int a, int b);
//void output(int sum, int midsum, int finalsum);
//
//int main()
//{
//	int sum = 0;
//	int midsum = 0;
//	int finalsum = 0;
//
//	printf("중간 기말 성적을 입력하세요:");
//	int score[ROWSIZE][COLSIZE] = { 0 };
//	input(score, ROWSIZE, COLSIZE);
//
//	printf("       중간      기말\n");
//	printf("----------------------------\n");
//
//	for (int i = 0; i < ROWSIZE; i++)
//	{
//		for (int j = 0; j < COLSIZE; j++)
//		{
//			printf("%10d", score[i][j]);
//			sum += score[i][j];
//			if (j == 0)
//				midsum += score[i][j];
//			else
//				finalsum += score[i][j];
//		}
//		puts("");
//	}
//	printf("----------------------------\n");
//	output(sum,midsum, finalsum);
//
//
//
//	return 0;
//}
//
//
//void input(int score[][COLSIZE], int a, int b)
//{
//	for (int i = 0; i < a; i++)
//		for (int j = 0; j < b; j++)
//			scanf_s("%d", &score[i][j]);
//}
//
//void output(int sum,int midsum, int finalsum)
//{
//	printf("평균: %7.2f %7.2f\n",(double)midsum / ROWSIZE, (double)finalsum/ROWSIZE );
//
//	printf("\n성적의 합은 %d이고 ", sum);
//	printf("평균은 %.2f이다. \n", (double)sum / (ROWSIZE * COLSIZE));
//}