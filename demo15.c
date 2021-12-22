#include<stdio.h>
#include<math.h>
int main()
{
    int m=9,n,i,h=9;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        m = (h + 9 * (pow(10,i)) + m);
    }
    printf("%d",m);
    return 0;
}