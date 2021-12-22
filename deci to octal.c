#include <stdio.h>
int main()
{
    int ar[10];
    int i, n;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 0; n>0 ; i++)
    {
        ar[i] = n % 8;
        n = n / 8;
    }
    printf("Converted number is ");
    for (i = i-1; i >=0; i--)
    {
        printf("%d",ar[i]);
    }
    return 0;
}
