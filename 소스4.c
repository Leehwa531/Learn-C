#include <stdio.h>

#define size 6

int main()
{
	int i, sum = 0;
	
	int cpoint[6] = {0};

	for (i = 0; i < size; i++)
	{
		scanf_s("%d",&cpoint[i]);
	}


	for (i = 0; i < size; i++)
	{
		sum += cpoint[i];
		printf("cpoint[%d] = %d\n", i, cpoint[i]);
	}

	printf("성적의 합은 %d이고", sum);
	printf(" 평균은 %.2f이다.\n", (double)sum / size);

}