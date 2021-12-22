#include<stdio.h>
int main(){
        int a;
        printf("Enter a number:");

        scanf("%d",&a);

        if(a%2){
                printf("Input is odd");
        }
        else{
            printf("Input is even");
        }

        return 0;
}
