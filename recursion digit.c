#include<stdio.h>
void digi(int n, int s);
int main()
{
   int s = 0,n;
   printf("Enter a number ");
   scanf("%d",&n);
   digi(n,s);
   return 0;
}

void digi(int n, int s)
{
    if(n != 0)
    {
        n = n / 10;
        s++;
        digi(n,s);
    }
    else{
        printf("Their is %d digit in given number ",s);
    }
}