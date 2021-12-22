#include<stdio.h>
int main()
{
    int ar[5];
    int i  , sum=0;
    printf("Enter 5 number");
for(i=0;i<=4;i++)
{
      scanf("%d",&ar[i]);

}
for(i=0;i<=4;i++)
{
    sum = sum + ar[i];
}
     printf("%d\n output",sum);
    return 0;

}
