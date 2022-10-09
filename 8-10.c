
//예제 8-10
#include <stdio.h>

int main(void)
{
	int a[] = { 8, 2, 8, 1, 3 };
	int* p = a;

	int ary[][4] = { 5, 7, 6, 2, 7, 8, 1, 3 }; //열이 4인 ary배열 선언
	int(*ptr)[4] = ary;			//열이 4인 배열을 가리키는 포인터
	//int *ptr[4] = ary;		//포인터 배열

	printf("%2d, %2d\n", *(p + 1), *(p + 4));	// *(p + 1) = a[0] + 1 이므로 a[1] = 2 똑같이 *( p + 4 ) = a[4] = 3
	printf("%2d, %2d\m", p[0], p[4]);			// p[0] = 8, p[4] = 3
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(a), sizeof(p));  //sizeof(a)는 a 전체의 배열의크기(20) 이고, sizeof(p)는 p[0]의 크기를 말하는 것이므로 4

	printf("%2d, %2d\n", **ary, **ptr++);		// ary는 ary[0][0]의 값이므로 5, ptr도 똑같이 ptr[0][0]의 값이므로 5가 출력 그 뒤, ptr에 후위연산자가 있으므로 ptr[0][1]이 된다.
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));		//ary+1은 ary[0][1] *포인터 하나는 주소의 값이 되고 ** 포인터 두개는 그 값을 출력하므로 7,현재 ptr은  ptr[0][1]이므로 똑같이 앞에처럼 7이 출력되고 그 뒤 ptr[0][2]가 된다.
	ptr = ary;  //ptr 주소를 ptr[0][0]으로 초기화
	printf("%2d, %2d\n",*(ary[1]+1),*(ptr[1] + 1));		//ary[1]은 행의 값, +1은 열의값에 1더하는것과 같으므로, ary[1][1]의 값은 8 ptr도 같다.
	printf("%2d, %2d\n",  * (*(ary + 1) + 3), * (*(ptr + 1) + 3));			//*(ary+1)은 ary[1][0]의 주소 값이고 +3했으므로 ary[1][3]의 값을 출력.
	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n", sizeof(ary), sizeof(ptr));		// ary의 전체의 크기는 8*4=32 ptr은 4이다. 단 포인터변수는 8byte입니다.

	return 0;
}