#include<stdio.h>
int sum(int x,int s);
int main()
{
   int s = 0,n;
   printf("Enter a number ");
   scanf("%d",&n);
   s = sum(n,s);

   printf("sum = %d",s);
   return 0;
}

int sum(int x,int s)
{
   
    if(x != 0)
    {
       s = s + x;
       x--;
       sum(x,s);
    }
    else{
    return s;
    }
}