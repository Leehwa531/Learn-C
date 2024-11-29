//9-2
#include <stdio.h>

double getarea(double);
double getcircum(doulbe);
//전역변수 선언
double pi = 3.14;
int gi;

int main(void)
{
	//지역변수 선언
	double r = 5.87;
	//전역변수 pi와 같은 이름의 지역변수 선언
	const double pi = 3.141592;

	printf("면적: %.2f\n", getarea(r));
	printf("둘레1: %.2f\n", 2*pi*r);
	printf("둘레2: %.2f\n", getcircum(r));
	printf("pi: %f\n", pi);
	printf("gi: %.2f\n", gi);
	return 0;
}

double getarea(double r)
{
	return r * r * pi;
}
