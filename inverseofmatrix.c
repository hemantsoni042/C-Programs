#include<stdio.h>

int main()
{
    float d;
    float ar[2][2];
    int i,j,k;

    printf("Enter values of a 2*2 matrix :- ");
    for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%f", &ar[i][j]);
		}
	}
    printf("Input matrix is:-\n");
    for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%0.1f \t", ar[i][j]);
		}
		printf("\n");
	}

    printf("Inverse of input matrix is :- \n");
    d = (ar[0][0] * ar[1][1]  -  ar[0][1]*ar[1][0]);

   ar[0][1] = -ar[0][1];
   ar[1][0] = -ar[1][0];

    k = ar[0][0];
    ar[0][0] = ar[1][1];
    ar[1][1] = k ;

    printf("%f\n",d);
    for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%0.2f \t", ar[i][j] / d);
		}
		printf("\n");
	}
	

    return 0;
}