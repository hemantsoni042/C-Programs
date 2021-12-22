#include<stdio.h>
int main(){
	int n,i,a;
	a=0;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if (n%i ==0){
			a=1;
			break;
		}
	}
	
	if(n==1){
		printf("1 is nither prime nor composite");
	}
	else{
		if(a==0){
			printf("%d is a prime number",n);
		}
		else{
			printf("%d is non prime number",n);
		}
	}
}
