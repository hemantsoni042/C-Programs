#include<stdio.h>
int main(){
	int a;
	printf("ENTER a");
	scanf("%d",&a);
	if (a>5){
		a=a+6;
	}
	printf("%d",a);
	return 0;
}
