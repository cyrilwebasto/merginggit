#include<stdio.h>

int calculate(int num1, int num2, int *pdiff)
{
	*pdiff = num1 - num2;
	return num1 + num2;
	//return num1 - num2;
}

int div(int a,int b)
{
return a%b;
}

int main(void)
{
	int n1 = 10, n2 = 20, sum, diff,divide;

	sum = calculate(n1, n2, &diff);
    divide = div(n1,n2);
	printf("sum = %d\n", sum);
	printf("diff = %d\n", diff);
    printf("division= %d\n",divide);
	printf("2 commit");
	printf("3 commit");
	return 0;
}
