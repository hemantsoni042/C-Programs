
#include<stdio.h>
int main()
{
    char hx[10];
    
    int n,m,i;

    printf("Enter a number ");
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        m = n % 16;
        if(m == 10 || m == 11 || m == 12 || m == 13 || m == 14 || m == 15)
        hx[i] = (55 + m);
        else
        hx[i] = (48 + m);
        n = n / 16;
    }
   printf("converted number is ");

   for(i=i-1;i>=0;i--)
   {
    printf("%c",hx[i]);
   }
   return 0;
}
