#include<stdio.h>
int main(){
	int R;
	float P;

	printf("Enter Radius ");
	scanf("%d",&R);

	P = 3.14159;

	printf("Area of Circle %f\n",P*R*R);

	printf("Circumference of Circle %f",2*P*R);

	return 0;
}
