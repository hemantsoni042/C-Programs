#include<stdio.h>
void evenodd(int n);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);    
    
    evenodd(a);
    
    return 0;    
}
void evenodd(int n)
{
    if(n%2==0)
    {
        printf("No is even");    
    }
    else
    {
        printf("No is odd");
    }
}
