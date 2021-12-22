#include<stdio.h>
int main(){
	int i,n,s,h,m;
	s=0;
	h=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",s);
		m = s + h;
		s=h;
		h=m;
	}
	return 0;
}
