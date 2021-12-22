#include<stdio.h>
int main()
{

    int ar[5]={1,2,3,9,12};
    int *pr1 = &ar[2];
    int *pr2=pr1 + 1;
    printf("%d ",*pr1);
    printf("%d ",pr1);
    printf("%d ",*pr2);
    printf("%d",pr2-pr1);
    return 0;
}
