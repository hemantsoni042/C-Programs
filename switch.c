#include <stdio.h>
int main(){
	int a,b,c;
	char ch;
	printf("enter two no.\n");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("A. ADD\n S. SUB\n");
	scanf("%c",&ch);

	switch(ch){
		case 'A':printf("A");
		         break;
		case 'S':printf("S");
		         break;
		default:printf("D");
		        break;         		
	}
	return 0;
}
