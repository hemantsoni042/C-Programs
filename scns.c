#include<stdio.h>
int main(){
	char ch,lowercase,uppercase,num;

	printf("Enter a character\n");
	scanf("%c",&ch);
	lowercase = (ch>='a' && ch<='z');
	uppercase = (ch>='A' && ch<='Z');
	num = (ch>='0' && ch<='9');
	if(lowercase){
		printf("Input is lowercase letter: %c",ch);
	}
	else if(uppercase){
		printf("Input is uppercase letter: %c",ch);
	}
	else if(num){
		printf("Input is number %c",ch);
	}
	else{
		printf("Input is symbol %c",ch);
	}
	return 0;
	}
