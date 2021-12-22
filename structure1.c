#include<stdio.h>

struct employ{
   int id;
   float salary;
   char name[15], address[30];
};
int main(){
   struct employ a;
   printf("Enter name, id, salary and address of employee ");
   scanf("%s%d%f%s",&a.name,&a.id,&a.salary,&a.address);
   printf("The name of employee is %s , id is %d , salary is %f and address is %s.",a.name,a.id,a.salary,a.address);
   return 0;
}
