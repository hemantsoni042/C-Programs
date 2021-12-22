#include<stdio.h>
void fab(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    fab(n);
    return 0;
}
void fab(int n){
    int a=0,b=1,c,i;
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}