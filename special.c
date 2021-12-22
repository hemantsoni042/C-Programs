#include<stdio.h>
#include<conio.h>
int main(){
    int b=0,l=0,d=0,o=0;
    int c;
    printf("Hiiiii");
    while((c = getchar()) != EOF)
    {
      if(c== ' ') 
      b++;
      else if(c>='0' && c<='9')
      d++;
      else if(c>='a' && c<='z' || c>='A' && c<='Z')
      l++;
      else
      o++;
    }
    printf(" %d    %d    %d    %d",b,d,l,o);
    return 0;
}