#include<stdio.h>
void fib(int n,int h, int s, int m);
int main()
{
    int n,h = 1,s = 0,m = 0;
    printf("Enter a number ");
    scanf("%d",&n);

    fib(n,h,s,m);

    return 0;
}

void fib(int n,int h, int s, int m)
{
   if(n !=0 )
   {
       printf(" %d ",s);
       m = h + s;
       s = h;
       h = m;
       n--;
       fib(n,h,s,m);
   }
}