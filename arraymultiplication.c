#include <stdio.h>
int main()
{
	int ar[4][4];
	int br[4][4];
	int tr[4][4];
	int i, j, k, r1, c1, r2, c2;
	printf("Enter rows and column of 1 matrix ");
	scanf("%d%d", &r1, &c1);
	printf("Enter values of 1 matrix ");
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}
	printf("Enter rows and column of 2 matrix ");
	scanf("%d%d", &r2, &c2);
	if (c1 == r2)
	{
		printf("Enter values of 2 matrix ");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				scanf("%d", &br[i][j]);
			}
		}

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf("%2d ", ar[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("%2d ", br[i][j]);
			}
			printf("\n");
		}
		printf("Multiplication of two matrices\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				tr[i][j] = 0;
				for (k = 0; k < c1; k++)
				{
					tr[i][j] = (ar[i][k] * br[k][j]) + tr[i][j];
				}
			}
		}
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("%2d ", tr[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("The multiplication of two matrices is not possible");
	}
	return 0;
}