#include<stdio.h>
int main()
{
	int ar[2][2][2][2],i,j,k,l;
	printf("Enter values of a matrix :- ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		   for(k=0;k<2;k++)
		      for(l=0;l<2;l++)
		          scanf("%d",&ar[i][j][k][l]);
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		   for(k=0;k<2;k++)
		      for(l=0;l<2;l++)
		              printf("\nar[%d][%d][%d][%d] with address[%d] = %d   and addition of index = %d\n",i,j,k,l,&ar[i][j][k][l],ar[i][j][k][l],i+j+k+l);
	}
	return 0;
}
