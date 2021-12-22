#include<stdio.h>
int main (){
	int a,b,c;
	printf("Enter three number a,b,c ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		printf("a = %d is maximum",a);
	}else if(b>c){
		printf("b = %d is maximum",b);
	}else{
		printf("c = %d is maximum",c);
	}
	return 0;
}
