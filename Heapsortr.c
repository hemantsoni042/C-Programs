#include<stdio.h>
#include<stdlib.h>

struct bt
{
    int data;
    struct bt *left;
    struct bt *right;
};

struct bt *root, *newno;
int level = 0;

void heapsort(ar[])
{
    int i=1;
    while(1)
    {
        if(root->left == NULL)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = ar[i];
            newno->left = NULL;
            newno->right = NULL;
            root->left = newno;
            i++;
            l++;
        }
    }
}

int main()
{
    int n, i, j, temp;
    printf("Enter number of elements :- ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter %d elements :- ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Given elements are :- ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }
    root = (struct node *)malloc(sizeof(struct node));
    root->data = ar[0];
    root->left = NULL;
    root->right = NULL;
    heapsort(ar);

    printf("Sorted elements are :- ");

    return 0;
}