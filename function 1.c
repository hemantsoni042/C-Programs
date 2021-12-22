#include"stdio.h"
int add(int a, int b);
int main()
{
    int a,b,sum;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    printf("sum of two numbers = %d",sum);
    return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
}
