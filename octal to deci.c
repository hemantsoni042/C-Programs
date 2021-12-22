#include <stdio.h>
#include<math.h>
int main()
{
  int ar[10];
  int i,n,h,s=0;
  printf("Enter a number");
  scanf("%d",&n);
  for(i=0;n>0;i++){
    h= (n%10);
    ar[i]=(h) * pow(8,i) ;
    n=n/10;
  }
  printf("converted number is ");
  for(i=i-1;i>=0;i--){
    s=ar[i] + s;
  }
  printf("%d",s);
  return 0;
}
