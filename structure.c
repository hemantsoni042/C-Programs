#include<stdio.h>
struct hem{
int a;
float b;
char h[30];
};
struct hem s;
int main(){
printf("Enter a character, number and a float value ");
scanf("%s%d%f",&s.h,&s.a,&s.b);
printf("Character is %s, number is %d and float is %f.",s.h,s.a,s.b);
return 0;
}
