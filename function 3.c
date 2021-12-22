#include<stdio.h>
void year(int n){
	if(n%100==0){
		printf("Input is not leap year");
	}else if(n%400==0){
		printf("Input is leap year");
	}else if(n%4==0){
		printf("Input is leap year");
	}else{
		printf("Input is not leap year");
	}
}
int main(){
	int n;
	printf("Enter a year ");
	scanf("%d",&n);
	year(n);
	return 0;
}
