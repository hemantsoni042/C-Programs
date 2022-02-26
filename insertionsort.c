#include <stdio.h>

int main()
{
    int n, i, j = 1, temp;
    printf("Enter number of elements :- ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter %d elements :- ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Given elements are :- ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(ar[j] > ar[i])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("\n\nSorted elements are :- ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }
    return 0;
}