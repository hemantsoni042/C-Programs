#include <stdio.h>
void fact(int x , int y);
int main()
{
    int f,a=1;
    scanf("%d",&f);
    fact(f,a);
    return 0;
}
void fact(int x , int y)
{
    if(x!=0){
        y = y*x;
        x=x-1;
        fact(x,y);
    }
    else
    {
        printf("%d",y);
    }

}
