#include<stdio.h>
int main()
{
	int ar[5][5],i,j,m,n;
	printf("Enter rows and column of matrix :- ");
	scanf("%d %d",&m,&n);
	printf("Enter elements of matrix :- ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Given matrix is :-\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of given matrix is :-\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",ar[j][i]);
		}
		printf("\n");
	}
	return 0;
}
