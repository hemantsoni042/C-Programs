#include<stdio.h>
int main(){
	unsigned long long int a,b,c;
	printf("Enter two numbers for multiplication:");
	scanf("%llu%llu",&a,&b);
	c=a*b;
	printf("c = %llu",c);
	return 0;
}
