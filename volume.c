#include<stdio.h>
int main()
{
    int l,b,h,v;
    printf("Enter Length, Breath and height of cuboid ");

    scanf("%d%d%d",&l,&b,&h);
    v = l*b*h;
    printf("Volume of cuboid is = %d ",v);
    return 0;
}
