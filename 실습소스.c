#include <stdio.h>

int get_sum_diff(int num1, int num2, int* sum, int* diff);

int main()
{
	int num1 = 100;
	int num2 = 200;
	int sum = 0;
	int diff = 0;

	get_sum_diff(num1, num2, &sum, &diff); //sum,diff�� �ּҸ� �Ѱ��ְ� �Լ����� �����ͷ� �޽��ϴ�.

	printf("���ҵ��� ��=%d\n", sum); //�� ���
	printf("���ҵ��� ��=%d\n", diff); //�� ���

}

int get_sum_diff(int num1, int num2, int* sum, int* diff)
{
	*sum = num1 + num2; //�����͸� �̿��ؼ�  ���� �Ѱ���
	*diff = num1 - num2; //�����͸� �̿��ؼ� diff�� ���� �Ѱ���
}