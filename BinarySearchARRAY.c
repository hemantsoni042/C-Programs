#include <stdio.h>

int binarySearch(int input[],int n, int x)
{
    int a,b;
    a=0;
    b=n-1;
    int mid = (a+b)/2;
    while(a<=b)
    {
        if(x == input[mid])
            return mid;
        else if(x > input[mid] &&  mid == n-1)
            return -1;
        else if(x > input[mid])
            a = mid + 1;
        else if(x < input[mid])
            b = mid - 1;
        mid = (a+b)/2;
    }
    return -1;
}

int main()
{
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

    printf("%2d",binarySearch(ar,n , value));

    return 0;
}