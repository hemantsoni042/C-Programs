#include<stdio.h>
int main(){
	int ar[3][2];
	int br[3][2];
	int tr[3][2];
	int i,j;
	FILE *h;
	h = fopen("addition.doc","w"); 
	printf("Enter values of 1 matrix ");
	fprintf(h,"Enter values of 1 matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Enter values of 2 matrix ");

	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&br[i][j]);
		}
	}


	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%2d ",ar[i][j]);
			fprintf(h,"%2d ",ar[i][j]);
		}
		printf("\n");
		fprintf(h,"\n\n");
	}
	printf("\n");
	fprintf(h,"Enter values of 2 matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%2d ",br[i][j]);
			fprintf(h,"%2d ",br[i][j]);
		
		}
		printf("\n");
		fprintf(h,"\n\n");
	}
	printf("\nThe addition of two matrices is \n");
	fprintf(h,"\nThe addition of two matrices is \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			tr[i][j]=ar[i][j] + br[i][j];
			printf("%2d ",tr[i][j]);
			fprintf(h,"%2d ",tr[i][j]);
		}
	
		printf("\n");
		fprintf(h,"\n\n");
	}
	return 0;
}
