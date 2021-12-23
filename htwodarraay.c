#include<stdio.h>
int main()
{
	int ar[3][3],i,j;
	printf("Enter values of a matrix :- ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		   scanf("%d",&ar[i][j]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		   printf("\nar[%d][%d] with address[%d] = %d\n",i,j,&ar[i][j],ar[i][j]);
	}
	return 0;
}
