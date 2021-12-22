#include <stdio.h>
#define Fill1(x,y) for(i=0;i<x;i++){ for(j=0;j<y;j++){
#define Fill2(x,y,z) for(i=0;i<x;i++){ for(j=0;j<y;j++){scanf("%d",&z[i][j]); }}
#define Fill3(x,y,z) for(i=0;i<x;i++){ for(j=0;j<y;j++){printf("%2d ",z[i][j]);}printf("\n");}
int main(){
	int ar[4][4];
	int br[4][4];
	int tr[4][4];
	int i,j,k,r1,c1,r2,c2;
	printf("Enter rows and column of 1 matrix ");
	scanf("%d%d",&r1,&c1);
	printf("Enter values of 1 matrix ");
    Fill2(r1,c1,ar)
	printf("Enter rows and column of 2 matrix ");
	scanf("%d%d",&r2,&c2);
	if(c1==r2){
	printf("Enter values of 2 matrix ");
	Fill2(r2,c2,br)
    Fill3(r1,c1,ar)
	printf("\n");
    Fill3(r2,c2,br)
    printf("Multiplication of two matrices\n");
	Fill1(r1,c2)
                tr[i][j] = 0;
                for(k=0;k<c1;k++){
                    tr[i][j] = (ar[i][k] * br[k][j]) + tr[i][j];
                }
            }
	}
	Fill3(r1,c2,tr)
	}else{
	printf("The multiplication of two matrices is not possible");
	}
	return 0;
}