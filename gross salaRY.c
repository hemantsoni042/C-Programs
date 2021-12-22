#include<stdio.h>
int main(){
	int BS;
	float GS, TA , HRA;
	scanf("%d",&BS);
	TA= BS*0.25;
	HRA=BS*0.40;
	GS= TA+BS+HRA;
	printf("%f",GS);
	return 0;
	}
