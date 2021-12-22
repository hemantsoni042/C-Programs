#include<stdio.h>
int main()
{
    int i,n,j;
    FILE *h;
    printf("Enter a no. ");
    scanf("%d",&n);
    h = fopen("table.doc","a");
    for(j=0;j<10;j++){
    for(i=1;i<=10;i++)
    {
        fprintf(h,"%7d ",i*(n+j));
    }
    fprintf(h,"\n");
    }
    fclose(h);
    return 0;
}
