#include<stdio.h>
int main(){
	int per;
	scanf("%d",&per);
	if(per>=60){
		printf("first division");
	}else if(per<60 && per>=50){
		printf("second division");
	}else if(per<50 && per>=40){
		printf("third division");
	}else {
		printf("fail");
	}
	return 0;
}
