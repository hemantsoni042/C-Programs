#include<stdio.h>

struct marks{
    int ph, mt, ch, sum;
    float avg;
};
int main(){
    struct marks h;
    printf("Enter marks of Physics, maths and chemistry ");
    scanf("%d%d%d",&h.ph,&h.mt,&h.ch);
    h.sum = h.ph + h.mt + h.ch;
    h.avg = (float)h.sum/3;
    printf("The marks of physics is %d and average is %f.",h.ph,h.avg);
    return 0;
}
