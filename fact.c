#include<stdio.h>
int add(int a,int b);
int main()
{
    int x,y,z;
    printf("Enter two no");
    scanf("%d%d",&x,&y);
    
    z = add(x,y);
    
    printf("Sum = %d",z);
    
    printf("\nHello");
    
    z = add(10,20);
    printf("\nSum = %d",z);
    
    printf("\nHi");
    
    z = add(10,x);
    printf("\nSum = %d",z);
    
    return 0;
}
int add(int a,int b)
{
    int c;
    c = a + b;
    return c;
}
