#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;
struct node *newno;
struct node *temp1, *temp2, *temp3, *temp4;

void insertRo(int value)
{
    root = (struct node *)malloc(sizeof(struct node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;
}

void insertLf(int value)
{
    if (root->left == NULL)
    {
        if (value <= root->data)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            root->left = newno;
            temp1 = newno;
            temp3 = temp1;
        }
    }
    else
    {
        temp1 = temp3;
        while (1)
        {
            if (temp1->data > value)
                if (temp1->left == NULL)
                    break;
                else
                    temp1 = temp1->left;

            else if (temp1->right == NULL)
                break;
            else
                temp1 = temp1->right;
        }
        if (value < temp1->data)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            temp1->left = newno;
        }
        else
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            temp1->right = newno;
        }
    }
}

void insertRt(int value)
{
    if (root->right == NULL)
    {
        if (value > root->data)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            root->right = newno;
            temp2 = newno;
            temp4 = temp2;
        }
    }
    else
    {
        temp2 = temp4;
        while (1)
        {
            if (temp2->data > value)
                if (temp2->left == NULL)
                    break;
                else
                    temp2 = temp2->left;

            else if (temp2->right == NULL)
                break;
            else
                temp2 = temp2->right;
        }
        if (value < temp2->data)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            temp2->left = newno;
            temp2 = newno;
        }
        else
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            temp2->right = newno;
            temp2 = newno;
        }
    }
}

void inordertraversal(struct node *temp5)
{
    if (temp5 == NULL)
        return;
    inordertraversal(temp5->left);
    printf("%4d", temp5->data);
    inordertraversal(temp5->right);
}

int main()
{
    int n = 0, i = 0;

    printf("Enter number of elements :- ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter value of %d elements :- ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("Given elements are :- ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (i == 0)
            insertRo(ar[i]);
        else if (ar[i] < root->data)
            insertLf(ar[i]);
        else
            insertRt(ar[i]);
    }

    printf("\n\nSorted elements :- ");
    inordertraversal(root);

    return 0;
}