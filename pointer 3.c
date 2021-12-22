#include<stdio.h>
int main(){
char *p = "hello hemant";
printf("%s\n",*&*&p);
return 0;
}
