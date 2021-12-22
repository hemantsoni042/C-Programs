#include<stdio.h>
int main(){
	int a=5,i;
	i=(++a) + (++a);
	printf("i=%d\n",i);
	printf("a=%d",a);
	return 0;
}
