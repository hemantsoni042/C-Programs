#include<stdio.h>
int main(){
	int i,n,j,k;
	printf("enter no. of line");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
			for(k=1;k<=i;k++){
				printf("*");
			}
		for (j=1;j<=n-i+1;j++){
			printf(" ");
		
		}printf("\n");
	
	}
	return 0;
}
