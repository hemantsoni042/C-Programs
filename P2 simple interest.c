#include<stdio.h>
int main()
{
        int P;
        float SI,T,R;
        printf("Enter Principle amount, Interest Rate, Time period:");
        scanf("%d%f%f",&P,&R,&T);

        SI= (P*R*T)/100;
        printf("Simple interest = %f",SI);

        return 0;
}
