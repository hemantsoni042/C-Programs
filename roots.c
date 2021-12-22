#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c,d,x,y;
  printf("find quadratic equation\nThe quadratic equation =ax^2+bx+c=0\nwrite the values of a,b and c\n");
  scanf("%d%d%d",&a,&b,&c);
  d = b*b-4*a*c;
  if(d==0)
  {
      x = y = -b / ( 2 * a);
      printf("roots are equal\n x = %d  & y  %d ", x, y);
  }
  else if(d>0)
  {
    x =  (-b + sqrt(d) )/ ( 2 * a);
    y =  (-b - sqrt(d) )/ ( 2 * a);
    printf("roots are real\n x = %d  & y  %d ", x, y);
  }
  else
  {
    printf("imagnary roots\n");
  }
  return 0;
}

