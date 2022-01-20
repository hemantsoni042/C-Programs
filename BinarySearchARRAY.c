#include <stdio.h>

void binarysearch(int ar[], int value, int lb, int ub)
{
    int index = (lb + ub) / 2;
    if (ar[index] == value)
        printf("Given %d value is find at %d position !!", value, index+1);
    else if (ar[index] > value)
        binarysearch(ar, value, 0, index - 1);
    else if (ar[index] < value)
        binarysearch(ar, value, index + 1, ub);
    else
        printf("Given %d value is not in the given array !!", value);
}

int main()
{yudfufuyfuyfuyfufyu
    int n, i, value;
    printf("Enter number of elements :- ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter %d elements ' elements must be in sorted form ' :- ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("Which number you want to search in the array :- ");
    scanf("%d", &value);

    binarysearch(ar, value, 0, n - 1);

    return 0;
}