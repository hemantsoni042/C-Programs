#include<stdio.h>
int main(){
	int i,j,k,l,m;
	i=-1;
	j=-1;
	k=0;
	l=2;
	m = i++ && j++ && k++ || l++;
	printf("%d%d%d%d%d",i,j,k,l,m);
	return 0;
}
