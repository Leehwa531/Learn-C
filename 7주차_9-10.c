////9-10
//
////file: callbyreference.c
//
//#include <stdio.h>
//
//void increase(int *origin, int increment);
//
//int main()
//{
//	int amount = 10;
//	//&amount: amount�� �ּҷ� ȣ��
//	increase(amount, 20);
//	printf("%d\n", amount);
//}
//
//void increase(int *origin, int increment)
//{
//	//*origin�� origin�� ����Ű�� ���� ��ü
//	*origin += increment;	//�׷��Ƿ� origin�� ����Ű�� �������� 20 ����
//}