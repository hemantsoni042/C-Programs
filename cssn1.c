#include<stdio.h>
int main(){
	char ch,small,cap,num;
	scanf("%c",&ch);
	small = (ch>='a' && ch<='z');
	cap = (ch>='A' && ch<='Z');
	num = (ch>='0' && ch<='9');
	if(small){
		printf("input is small %c",ch);
	}
	else if(cap){
		printf("input is capital %c",ch);
	}
	else if(num){
		printf("input is number %c",ch);
	}
	else{
		printf("input is symbol %c",ch);
	}
	return 0;
	}
