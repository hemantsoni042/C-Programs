#include<stdio.h>
struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;
int main(){
    int i=2;
printf("%d",sizeof(town));
printf("\n%d",sizeof(i));
printf("\n%d",sizeof(post_office));
return 0;
}
