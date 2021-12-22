#include<stdio.h>
int main()
{
 int a;
 int *b=&a;
 int **c=&b;

 scanf("%d",&a);
 printf("%d\n",a);
 printf("%d\n",&a);
 printf("%d\n",b);
 printf("%d\n",&b);
 printf("%d\n",c);
 return 0;
}
