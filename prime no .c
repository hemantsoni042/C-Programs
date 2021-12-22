#include<stdio.h>
int main()
{
    int n, i, Temp = 0 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            Temp = 1;
            break;
        }
    }
    if(Temp == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    
    return 0;
}
