#include<stdio.h>
int main()
{
    char ch;
    FILE *r,*w;
    r = fopen("his.txt","r");
    w = fopen("him.txt","w");
    while(1)
    {
        ch = fgetc(r);
        if(ch == EOF){
            break;
        }
        else{
        if(ch<'a' || ch>'z'){
        fprintf(w,"%c",ch);
        }
        else{
            fprintf(w,"%c",ch-32);
        }
        }
   }
   printf("done");
   fclose(r);
   fclose(w);
   return 0;
}
