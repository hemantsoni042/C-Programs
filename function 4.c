#include<stdio.h>
void even(int n){
	if(n%2==0){
		printf("Input is even ");
	}else{
		printf("Input is odd");
	}
}
int main(){
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	even(a);
	return 0;
}
