#include<stdio.h>
//void swap(int x, int y);
void swap(int *x, int *y);   //call by Address
int main()
{
    int a , b;
    printf("Enter two no");
    scanf("%d%d",&a,&b);
    
    printf("\nBefore Swaping a = %d and b = %d",a,b);
    
    //swap(a,b);  //call by value
    swap(&a,&b);  //call by Address  
    
    printf("\nAfter Swaping a = %d and b = %d",a,b);
    return 0;
}
//void swap(int x, int y)
void swap(int *x, int *y)   //call by Address
{
    int t;
    printf("\nBefore Swaping x = %d and y = %d",*x,*y);
    t = *x;
    *x = *y;
    *y = t;
    printf("\nBefore Swaping x = %d and y = %d",*x,*y);
}
