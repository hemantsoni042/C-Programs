// #include<stdio.h>
// enum CV{
//     s=1,
//     w=2,
//     sd=4
// };
// int main(){
//     int mcv= w|sd;
//     printf("%d",mcv);
//     return 0;
// }
#include<stdio.h>
// union ud{
//     int a;
//     int b;
// };
// struct sd{
//     union ud c;
//     int d;
// };
struct re{
    char s[20];
    int m;
};
int main(){
    // int x=1;
    // switch(x){
    //     case x:
    //     break;
    //     case x+1:
    //     break;
    //     default :
    //     break;
    // }
    // typedef double num[3];
    // num ar[5]={1,2,3,4,5,6};
    // printf("%u",sizeof(ar));
    // printf(" %.2f",ar[1][1]);
    // int p=5,q=6;
    // // printf("%d",++(p+q+5));
    // int x=8,y,z;
    // y=--x;
    // z=x--;
    // printf("%d %d %d ",x,y,z);
    // int ar[]={10,20,30,40,50};
    // int *ip,i;
    // for(ip=ar + 4,i=0;i<5;i++)
    // printf("%d ",ip[-i]);
    // int x=1,y;
    // y=(x=x+5,x*5);
    // printf("%d",y);
    // struct sd da={10,20};
    // printf("%ld ",sizeof(da));
    // printf("%d %d %d",da.c.a,da.c.b,da.d);

    // struct re r[]={
    //     {"ma",95},{"sc",93},{"en",80}
    // };

    // printf("%s %d",r[1].s , (*(r+2)).m);
    int *p,n=5;
    p=&n;
    *p+=1;
    printf("%d %d",*p,n);
    return 0;
}
