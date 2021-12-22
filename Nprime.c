#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(;i<=n-1;i++)
    {
    if(n%i==0)
    {
    printf("not a prime number\n");
    
   break;
    }  
    }
if(i==n)
printf("prime number\n");
}