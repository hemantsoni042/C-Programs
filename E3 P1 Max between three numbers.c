#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("a = %d is max.",a);
		}
		else{
			printf("c = %d is max.",c);
		}
	}
	else{
		if(b>c){
			printf("b = %d is max.",b);
		}
		else{
			printf("c = %d is max.",c);
		}
	}
	return 0;
}
