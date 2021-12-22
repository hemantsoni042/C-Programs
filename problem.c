#include<stdio.h>
int main(){
	int n,i;
	float w[50], sum, avg;
	sum = 0;
	printf("Enter the number of cars: ");
	scanf("%d",&n);
	
	printf("Enter the weights:");
	for(i=1;i<=n;i++){
    	scanf("%f",&w[i]);
    	sum = sum + w[i];
	}
	avg = sum/n;
    for(i=1;i<=n;i++){
    	printf("%f\n",avg-w[i]);
	}
       
	return 0;
}
