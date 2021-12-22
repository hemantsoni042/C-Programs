#include<stdio.h>
int main(){
	int a,r,sum,i;
	i=0;
	sum =0;
	scanf("%d",&a);
	
	if(a>=0 && a<=999){
		if(a<=0 && a>=9){
			printf("%d is armstrong no.",a);
		}else if(a>=10 && a<=99){
			for (i=a ; i>0; i = i/10){
				r = i % 10;
				sum = sum + r*r;
			}if ( sum == a ){
					printf("%d is armstrong no.",a);
			}else {
					printf("%d is not armstrong no.",a);
			}
		}else {
			for (i=a ; i>0; i = i/10){
				r = i % 10;
				sum = sum + r*r*r;
		}if ( sum == a ){
					printf("%d is armstrong no.",a);
			}else {
					printf("%d is not armstrong no.",a);
			}
	}
}else {
	printf("given inpur is greater then 999");
}
return 0;
}
