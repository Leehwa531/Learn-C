//예제8-13
#include <stdio.h>

int sumary(int* ary, int SIZE);

int main()
{

	int i, sum = 0;
	int point[] = { 95, 88,76,54,85,33,65,78,99,82 };
	int* address = point; // 포인터 배열 address 선언
	int aryLength = sizeof(point) / sizeof(int); // point전체 크기에서 int=4를 나누면 배열 갯수가 나오겠죵

	for (i = 0; i < aryLength; i++)
		sum += *(point + i);	//point는 주소값, i만큼 더하면 4byte*i만큼 올라감 즉 (point+i)의 값이 sum에 더해짐
	// sum += *(point++); //오류 발생
	// sum += *(address++); //기능

	printf("메인에서 구한 합은%d\n", sum);	// sum 출력
	address = point;
	printf("함수sumary() 호출로 구한 합은 %d\n", sumary(point, aryLength)); //
	printf("함수sumary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));
	printf("함수sumary() 호출로 구한 합은 %d\n", sumary(address, aryLength));

}


int sumary(int* ary, int SIZE)
{
	int sum = 0, i = 0;

	for (i = 0; i < SIZE; i++)
	{
		//sum += ary[i]; 과 같음
		//sum += *(ary + I); 과 같음
		sum += *ary++; // ary의 값을 sum에 더하고 ary주소에 +1을 더한것과 같다. 즉 *(ary+1)
		// sum += *(ary++); 과 같음
	}
	return sum;
}