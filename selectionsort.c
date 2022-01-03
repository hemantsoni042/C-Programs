#include <stdio.h>

int main()
{
    int n, i, j=1, temp;
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

    for (i = 0; i < n; i++)
    {
        for (; j < n ; j++)
        {
            if (ar[i] > ar[j])
            {
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
        j = i + 2;
    }

    printf("\n\nSorted elements are :- ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }
    return 0;
}
