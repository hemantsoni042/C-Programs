#include<stdio.h>
void table(int n){
	int i;
	for(i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
}
int main(){
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	table(a);
	return 0;
}
