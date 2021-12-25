#include <stdio.h>


void Quicksort(int Ar[], int low, int high)
{

}

int main()
{
    int n, i;
    printf("Enter number of elements for QuickSort :- ");
    scanf("%d", &n);
    int *Ar[n];
    printf("Enter the elements for QuickSort :- ");
    for (i = 0; i < n; i++)
        scanf("%d", &Ar[i]);

    printf("Given elements for sorting is :-  ");

    for (i = 0; i < n; i++)
        printf("%2d ", Ar[i]);

    Quicksort(*Ar[n], 0, n - 1);

    printf("\nSorted elements are :- ");

    for (i = 0; i < n; i++)
        printf("%2d ", Ar[i]);
}