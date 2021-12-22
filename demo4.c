#include<stdio.h>
int main(){
	int n,i,r;
	printf("enter a number : ");
	scanf("%d",&n);
	
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		printf("%d ",r);
	}
	return 0;
}
