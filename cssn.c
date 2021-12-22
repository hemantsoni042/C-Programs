#include<stdio.h>
int main(){
	char ch,small,cap,num;
	scanf("%c",&ch);
	small = (ch>='a' && ch<='z');
	cap = (ch>='A' && ch<='Z');
	num = (ch>='0' && ch<='9');
	if(ch = small){
		printf("input is small %c",ch);
	}
	else if(ch = cap){
		printf("input is capital %c",ch);
	}
	else if(ch = num){
		printf("input is number %c",ch);
	}
	else{
		printf("input is symbol %c",ch);
	}
	return 0;
	}
