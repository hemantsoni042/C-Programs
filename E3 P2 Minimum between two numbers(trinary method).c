#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	(a > b) ? printf("b = %d is minimum.",b):printf("a = %d is minimum.",a);
	return 0;
}
