#include<stdio.h>
int main(){
    int a=10;
    int *b=&a;
    scanf("%d",&a);
    printf("%d\n",b);
    printf("%d\n",*b);
    printf("%d\n",*(&b));
    printf("%d\n",&b);

    return 0;
}
