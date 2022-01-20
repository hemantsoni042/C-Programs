#include <stdio.h>

int main()
{
    int n, i, j, temp;
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
    i = 0;

    while (i < n)
    {
        j = 0;
        while (j < (n - i))
        {
            if (ar[j + 1] < ar[j])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    printf("\n\nSorted elements are :- ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }
    return 0;
}