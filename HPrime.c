#include<stdio.h>
#include<conio.h>
int CheckPrime(int n){
    if(n==1){
        return 1;
    }
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
        return 1;
}
int main(){
    printf("Enter Frist Number :-");
    int n;
    int i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(CheckPrime(i)){
            printf("%d",i);
            printf("     ");
        }
    }