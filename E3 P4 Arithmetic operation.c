#include<stdio.h>
int main(){
	int a,b;
	float c;
	char ch;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter a character :-\nA Addition\nB Subtraction\nC Multiplication\nD Division\n:");
	fflush(stdin);
	scanf("%c",&ch);
	
	switch(ch){
		case 'A':c=a+b;
		         printf("Addition = %f",c);
		         break;
		
		case 'B':c=a-b;
		         printf("Subtraction = %f",c);
		         break;
		         
		case 'C':c=a*b;
		         printf("Multiplication = %f",c);
		         break;
		         
		case 'D':c=a/b;
		         printf("Division = %f",c);
		         break;

        default:printf("Invalid Character");
		        break;	
	}
	return 0;
}
