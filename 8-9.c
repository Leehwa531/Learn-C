//���� 8-9
#include <stdio.h>

int main()
{
	int* pary[3] = { NULL }; //������ �迭 pary ���� �ȿ� ���� x
	int i, a = 10, b = 20, c = 30;

	pary[0] = &a; //pary[0]�� a�� �ּҰ� ����
	pary[1] = &b; //pary[1]�� b�� �ּҰ� ����
	pary[2] = &c; //pary[2]�� c�� �ּҰ� ����
	for (i = 0; i < 3; i++)
		printf("*pAry[%d] = %d\n", i, *pary[i]); //pAry[i]�� �� ��� �� a, b, c ���
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", pary[i]); //pary[i]��ü�� �ּҸ� ��Ÿ���⿡ '&' �ʿ� x
		printf("%d, %d, %d\n", a, b, c); // a,b,c,�� ���
	}

}