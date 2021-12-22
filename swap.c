#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("a = %d,b = %d before swapping\n",a,b);

	c=a;
	a=b;
	b=c;

	printf("a = %d,b = %d after swapping",a,b);
	return 0;
}
