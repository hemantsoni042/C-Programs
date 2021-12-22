#include<stdio.h>
int main()
{
    int ar[5];
    int i , max=1 ;
 printf("Enter 5 number");
for(i=0;i<4;i++)
{
      scanf("%d",&ar[i]);

}
for(i=0;i<4;i++)
{
    if(ar[i] > max)
    {
        max = ar[i];
    }
}
     printf("%d\n",max);
    return 0;

}
