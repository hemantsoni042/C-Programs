#include<stdio.h>
int main()
{
    int ar[5];
    int i,n;
    printf("enter number input less than and equal to 4");
   scanf("%d",&n);
for(i=0;i<n;i++)
{
      scanf("%d",&ar[i]);

}
for(i=0;i<n;i++)
{
    printf("%d\n",ar[i]);
}

    return 0;

}
