#include<stdio.h>
int main(){
	char ch;
	printf("Enter a char  ");
	scanf("%c",&ch);
	switch (ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'O':
		case 'o':
		case 'u':
		case 'U':printf("The character is vowel.\n");
		         break;
		default:printf("The alphabet is consonant.\n");
		        break;
	}
	return 0;
}

