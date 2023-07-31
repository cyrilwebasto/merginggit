#include<stdio.h>

int calculate(int num1, int num2, int *pdiff)
{
	*pdiff = num1 - num2;
	return num1 + num2;
	//return num1 - num2;
}

int multiplication(int no1, int no2)
{
	return no1*no2;
}

int main(void)
{
	printf("\nUDAYRAJ branch\n");
	int n1 = 40, n2 = 5, sum, diff,mul;

	sum = calculate(n1, n2, &diff);
	mul = multiplication(n1, n2);
	printf("sum = %d\n", sum);
	printf("diff = %d\n", diff);
	printf("division = %d\n", mul);

	printf("commit 2\n");
	printf("commit 3\n");
	printf("commit 4\n");

	return 0;
}
