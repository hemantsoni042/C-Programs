#include<stdio.h>
int main(){
	int a=5,i;
	i=(++a);  //i=6,a=6
	i=i+(++a);  //i=13=6+7,a=7
	printf("i=%d\n",i);
	printf("a=%d",a);
	return 0;
}
