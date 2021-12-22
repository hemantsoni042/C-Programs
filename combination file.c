#include<stdio.h>
int main()
{
    int i;
    FILE *h;
    h=fopen("combination.txt","w");
    for(i=0;i<1000000;i++){
       if(i<10){
           fprintf(h,"00000%d ",i);
       }else if(i>=10 && i<100)
           {
               fprintf(h,"0000%d ",i);
           }else if(i>=100 && i<1000)
             {
               fprintf(h,"000%d ",i);
             }else if(i>=1000 && i<10000)
                   {
                       fprintf(h,"00%d ",i);
                   }else if(i>=10000 && i<100000)
                        {
                            fprintf(h,"0%d ",i);
                        }else if(i>=100000 && i<1000000)
                              {
                                   fprintf(h,"%d ",i);
                              }
    }
    fclose(h);
    printf("Done");
    return 0;
}