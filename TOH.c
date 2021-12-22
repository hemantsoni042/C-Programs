#include <stdio.h>

void TOH(char rod1, char rod2, char rod3, int n)
{
    if (n <= 0)
    {
        printf("For this Tower of hanoi is not possible because the number of disc is so small \n");
        
    }
    if (n == 1)
    {
        printf("Move disc form %c to %c\n", rod1, rod3);
    }
    else
    {
        TOH(rod1, rod3, rod2, n - 1);
        TOH(rod1, rod2, rod3, 1);
        TOH(rod2, rod1, rod3, n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number of disc:- ");
    scanf("%d", &n);
    printf("Tower of Hanoi for %d disc \n", n);
    TOH('1', '2', '3', n);
    return 0;
}