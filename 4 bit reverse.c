#include<stdio.h>
int main(){
	int h,n;
	printf("Enter a four digit \'4 bits\' number: ");
	scanf("%d",&n);
	
	if (n>=1000 && n<=9999){
		h = n % 10;
		printf("%d",h);
		n = n/10;
		
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
