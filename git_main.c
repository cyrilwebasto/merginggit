#include<stdio.h>

int calculate(int num1, int num2, int *pdiff)
{
	*pdiff = num1 - num2;
	return num1 + num2;
	//return num1 - num2;
}

int main(void)
{
	int n1 = 10, n2 = 20, sum, diff;

	sum = calculate(n1, n2, &diff);

	printf("sum = %d\n", sum);
	printf("diff = %d\n", diff);

	return 0;
}
