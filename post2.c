#include<stdio.h>
int main(){
	int a=5,i;
	i=(a++) ;  //i=5,a=6
	i=i+(a++);  //i=11=5+6,a=7
	printf("i=%d\n",i);
	printf("a=%d",a);
	return 0;
}
