#include<stdio.h>
int main(){
	int n,i,j,h;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=n-i+1,h=1;j>=1;j--,h++)
       {
           printf("%c",64+h);
       }
       for(j=1;j<=2*i-2;j++)
       {
           printf(" ");
       }
       for(j=n-i+1;j>=1;j--)
       {
       printf("%c",64+j);
       }
       printf("\n");
    }
   return 0;
}
