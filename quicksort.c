#include <stdio.h>

int partition(int A[], int lb, int ub)
{
    int pivot = A[lb];
    int i = lb + 1;
    int j = ub;
    int temp;
    do
    {
        while (A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[lb];
    A[lb] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int a[], int low, int high)
{
    int PartitionIN;
    if (low < high)
    {
        PartitionIN = partition(a, low, high);
        quicksort(a, low, PartitionIN - 1);
        quicksort(a, PartitionIN + 1, high);
    }
}

int main()
{
    int n, i, j, k, low, high, partitionIN;
    printf("Enter number of elements for QuickSort :- ");
    scanf("%d", &n);

    int ar[n];
    printf("Enter the elements for QuickSort :- ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    printf("Given elements for sorting is :-  ");

    for (i = 0; i < n; i++)
        printf("%4d ", ar[i]);

    quicksort(ar, 0, n - 1);

    printf("\nSorted array is :- ");
    for (i = 0; i < n; i++)
        printf("%6d ", ar[i]);
}