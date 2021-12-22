#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	switch(a % 2){
		case 1:printf("Input is odd");
		       break;
		case 0:printf("Input is even");
		       break;
	}
	return 0;
}
