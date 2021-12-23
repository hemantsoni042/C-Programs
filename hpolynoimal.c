#include<stdio.h>

int main(){
	int ar[10], br[10], cr[10], m, n, i, o;
	printf("Enter highest degree in first polynomial :-");
	scanf("%d",&m);
	printf("Enter variables of first polynomails as constant x x^2...:-");
	for( i = 0; i <= m; i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter highest degree in first polynomial :-");
	scanf("%d",&n);
	printf("Enter variables of second polynomails as constant x x^2...:-");
	for( i = 0; i <= n; i++){
		scanf("%d",&br[i]);
	}
	
	printf("\n1.Polynomial = ");
	for( i = 0; i <= m; i++){
		if(i==0)
		  printf("%d  ",ar[i]);
		else
		  printf("%dx^%d ",ar[i],i);
	}
	printf("\n2.Polynomial = ");
	for( i = 0; i <= n; i++){
		if(i==0)
		  printf("%d  ",br[i]);
		else
		  printf("%dx^%d ",br[i],i);
	}
	if(m<n){
		o=n;
	}else{
		o=m;
	}
	printf("\n\nThe sum of both the polynomials are :-\n");
	for( i = 0; i <= o; i++){
	    cr[i] = ar[i] + br[i];	
	    if(i==0)
		printf("%d  ",cr[i]);
		printf("%dx^%d ",cr[i],i);
	}
	return 0;
}
