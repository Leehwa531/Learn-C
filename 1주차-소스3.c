#include <stdio.h>

double temperature(double a);

int main()
{
	
	for (double temp = 0; temp <= 100; temp)
	{
		printf("%.2lf ", temperature(temp));
		temp += 0.5;
	}



}

double temperature(double a)
{
	return (a * 1.8 + 32);
}
