#include<stdio.h>
int main(){
   int a,b,c;
   scanf("%d%d",&a,&b);
   if(b==0){
    printf("infinity");
   }
   c=a/b;
   printf("%d/%d is %d",a,b,c);
   return 0;
}
