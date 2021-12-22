#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 50

char stack[MAX];
int top = -1;

void push(char a){
	if(top >= MAX-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = a;
	}
}

char pop(){
	char input;
	if(top == -1){
		printf("Underflow \n");
	}
	else{
		input = stack[top];
		top--;
		return(input);
	}
}

void infixtopostfix(char in[],char po[]){
  int i=0,j=0;
  char ch,op;
  push('(');
  strcat(in,")");
  ch=in[i];
  while(ch != '\0'){
  	if(ch=='(')
  	   push(ch);
  	else if(isdigit(ch) || isalpha(ch)){
  		po[j]=ch;
  		j++;
	}
	else if(symbol == 1){
		op = pop();
		while(op != '('){
			
		}
	}
  	
  }
}

int main(){
	char IN[MAX],PO[MAX];
	printf("Input an infix :- ");
	gets(IN);
	infixtopostfix(IN,PO);
	return 0;
}
