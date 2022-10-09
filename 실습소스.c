#include <stdio.h>

int get_sum_diff(int num1, int num2, int* sum, int* diff);

int main()
{
	int num1 = 100;
	int num2 = 200;
	int sum = 0;
	int diff = 0;

	get_sum_diff(num1, num2, &sum, &diff); //sum,diff의 주소를 넘겨주고 함수에서 포인터로 받습니다.

	printf("원소들의 합=%d\n", sum); //합 출력
	printf("원소들의 차=%d\n", diff); //차 출력

}

int get_sum_diff(int num1, int num2, int* sum, int* diff)
{
	*sum = num1 + num2; //포인터를 이용해서  값을 넘겨줌
	*diff = num1 - num2; //포인터를 이용해서 diff의 값을 넘겨줌
}