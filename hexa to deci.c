#include<stdio.h>
#include <math.h>
int main()
{
    char st[10];
    int de[10];
    int i,h = 0  ,j;
    printf("Enter a hexadecimal ");
    scanf("%s",st);

    for(i=0;i<=9;i++)
    {
       if(st[i] == 0)
        break;
    }
    printf("Converted number is ");
    for(i=i-1,j=0;i>=0;i--,j++)
    {
        if(st[i] == 'A' ||st[i] == 'B' ||st[i] == 'C' ||st[i] == 'D' ||st[i] == 'E' ||st[i] == 'F')
        {
          if(st[i] == 'A')
            de[j] = 10;
          if(st[i] == 'B')
            de[j] = 11;
          if(st[i] == 'C')
            de[j] = 12;
          if(st[i] == 'D')
            de[j] = 13;
          if(st[i] == 'E')
            de[j] = 14;
          if(st[i] == 'F')
            de[j] = 15;
        }
        else
        {
          if(st[i] == '0')
            de[j] = 0;
          if(st[i] == '1')
            de[j] = 1;
          if(st[i] == '2')
            de[j] = 2;
          if(st[i] == '3')
            de[j] = 3;
          if(st[i] == '4')
            de[j] = 4;
          if(st[i] == '5')
            de[j] = 5;
          if(st[i] == '6')
            de[j] = 6;
          if(st[i] == '7')
            de[j] = 7;
          if(st[i] == '8')
            de[j] = 8;
          if(st[i] == '9')
            de[j] = 9;
        }
        de[j] = (de[j]) * pow(16,j);
        h = h + de[j];
    }
    printf("%d",h);
    return 0;
}
