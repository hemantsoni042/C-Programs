#include<stdio.h>
int main(){
	int h,n;
	printf("Enter a three digit \'3 bits\' number: ");
	scanf("%d",&n);
	
	if (n>=100 && n<=999){
		h = n % 10;
		printf("%d",h);
		n = n/10;
		
     	h = n % 10;
		printf("%d",h);
		n = n/10;
		
		h = n % 10;
		printf("%d",h);
		n = n/10;
	}
	else {
		printf("Input is not three digit number");
	}
	return 0;
}
