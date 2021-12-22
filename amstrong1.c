#include<stdio.h>
int main()
{
  int r,h,s,i;
  printf("Armstrong number between 1 to 500-- ");

  for(i=10;i<=500;i++)
  {
      if(i<100 && i>=10)
      {
          r = i % 10;
          h = i / 10;
          s = r*r + h*h ;
          if(s==i)
          {
              printf("%d ",s);
          }
      }

      else
      {
         r = i % 10;
         s = r * r * r;
         h = i / 10;
         r = h % 10;
         h = h / 10;
         s = s + r*r*r + h*h*h;
         if(s==i)
         {
             printf("%d ",s);
         }
      }
  }
  return 0;
}