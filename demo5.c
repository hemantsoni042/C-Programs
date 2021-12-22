#include<stdio.h>
#include<conio.h>
void add();
void test();
void one();
int main()
{
    printf("main");
    test();
    add();
    return 0;
}
void add()
{
    printf("\nadd");
    one();
}
void test()
{
    printf("\ntest");
    add();
    one();
}
void one()
{
    printf("\none");
}
