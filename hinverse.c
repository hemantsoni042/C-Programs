#include<stdio.h>
#include<math.h>
int main()
{
	float ar[3][3];
	int i,j;
	double d;
	printf("Enter values of 1 matrix :- ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		   scanf("%f",&ar[i][j]);
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		   printf("%.1f ",ar[i][j]);
		   printf("\n");
	}
	printf("Inverse of this array is :-\n");
	d= ar[0][0]*((ar[1][1]*ar[2][2]) - (ar[2][1]*ar[1][2])) - (ar[0][1]*((ar[1][0]*ar[2][2]) -(ar[1][2]*ar[2][0]))) + (ar[0][2]*((ar[1][0]*ar[2][1])-(ar[1][1]*ar[2][0])));
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		   printf("%lf \t",ar[i][j]/d);
		   printf("\n");
	}
	return 0;
}
