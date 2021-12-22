#include<stdio.h>

void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d and b=%d",a,b);
	
}
int main(){
	int x,y;
	printf("Enter two numbers ");
	scanf("%d%d",&x,&y);
	printf("Before swapping a=%d and b=%d\n",x,y);
	swap(x,y);
	return 0;
}
