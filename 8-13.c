//����8-13
#include <stdio.h>

int sumary(int* ary, int SIZE);

int main()
{

	int i, sum = 0;
	int point[] = { 95, 88,76,54,85,33,65,78,99,82 };
	int* address = point; // ������ �迭 address ����
	int aryLength = sizeof(point) / sizeof(int); // point��ü ũ�⿡�� int=4�� ������ �迭 ������ ��������

	for (i = 0; i < aryLength; i++)
		sum += *(point + i);	//point�� �ּҰ�, i��ŭ ���ϸ� 4byte*i��ŭ �ö� �� (point+i)�� ���� sum�� ������
	// sum += *(point++); //���� �߻�
	// sum += *(address++); //���

	printf("���ο��� ���� ����%d\n", sum);	// sum ���
	address = point;
	printf("�Լ�sumary() ȣ��� ���� ���� %d\n", sumary(point, aryLength)); //
	printf("�Լ�sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));
	printf("�Լ�sumary() ȣ��� ���� ���� %d\n", sumary(address, aryLength));

}


int sumary(int* ary, int SIZE)
{
	int sum = 0, i = 0;

	for (i = 0; i < SIZE; i++)
	{
		//sum += ary[i]; �� ����
		//sum += *(ary + I); �� ����
		sum += *ary++; // ary�� ���� sum�� ���ϰ� ary�ּҿ� +1�� ���ѰͰ� ����. �� *(ary+1)
		// sum += *(ary++); �� ����
	}
	return sum;
}