#include<stdio.h>
int main(){
        float C,F;
        printf("Enter Temperature in centigrade:");
        scanf("%f",&C);

        F = (C*9/5)+32;
        printf("Temperature in Fahrenheit = %f",F);
        return 0;
}
