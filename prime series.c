#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    printf("Enter a number greater than or equal to 2  :- ");
    scanf("%d",&n);
    printf("2 ");
    for(i=3;i<=n;i=i+2)
    {
      for(j=3,c=0;j<=i;j=j+2)
      {
          if(i%j == 0)
          {
            c++;
          }
          if(j==i & c==1)
          {
              printf(", %d",i);
          }
          else if(j!=i)
          {
              continue;
          }
          else
          {
              break;
          }
      }
    }
    return 0;
}