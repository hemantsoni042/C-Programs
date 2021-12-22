#include<stdio.h>
int main(){
	int a,b,h,r=0,n;
	
	printf("Enter a no.: ");
	scanf("%d",&n);
	a=n;
	for(h=n;h>0;h=h/10){
		
		b=h%10;
		r = (r*10)+b;
	}
	if(a==r){
		printf("%d is a Palindrome no.",r);
	}
	else{
		printf("%d is not a Palindrome no.",r);
	}
	return 0;
}
