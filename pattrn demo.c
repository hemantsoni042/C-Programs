#include<stdio.h>
int main()
{
    int i,n,j,h=1,s=1;
    printf("Enter a number ");
    scanf("%d",&n);

    for(i=01;i<=n;i++)
    {
      for(j=1;j<=n-i+1;j++)
      printf(" ");

    for(j=1;j<=i;j++,h++)
    {
       s=s*(i-j+1)/j;
       if(s==0){
       printf("1 ");
       s=1;
       }
       else
      printf("%d ",s);
     
    }

    printf("\n");

    }
    return 0;
}