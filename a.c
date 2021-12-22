#include<stdio.h>
int main(){
	int a;
	printf("enter a number ");
	scanf("%d",&a);
	if(a<0){
		printf("a is negative");
	}else{
		printf("a is positive");
	}
	return 0;
}
