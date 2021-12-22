#include<stdio.h>
int main(){
	int ar[9];
	int i;
	printf("Enter values of array :-");
	for(i=0;i<9;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<9;i++){
		printf("ar[%d.%d] = %d\n",i,&ar[i],ar[i]);
	}
	return 0;
}
