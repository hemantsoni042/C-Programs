#include<stdio.h>
int main(){
	int ar[3][2];
	int br[3][2];
	int tr[3][2];
	int i,j;
	printf("Enter values of 1 matrix ");
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
			printf("%2d\n",ar[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%2d\n",br[i][j]);
		}
	}
	printf("The addition of two matrices is ");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			tr[i][j]=ar[i][j] + br[i][j];
			printf("%2d\n",tr[i][j]);
		}
	}
	return 0;
}
