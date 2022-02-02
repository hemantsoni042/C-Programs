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
int n;

void insertRo(int value)
{
    root = (struct node *)malloc(sizeof(struct node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;
    n = 1;
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
    n++;
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
    n++;
}

void inordertraversal(struct node *temp5)
{
    if (temp5 == NULL)
        return;
    inordertraversal(temp5->left);
    printf("%4d", temp5->data);
    inordertraversal(temp5->right);
}

int binarySearch(struct node *temp6,int key)
{
    if(temp6->data == key)
       return 1;
    else if(temp6->data > key && temp6->left != NULL)
    {
       temp6 = temp6->left;
       binarySearch(temp6,key);
    }
    else if(temp6->data < key && temp6->right != NULL)
    {
       temp6 = temp6->right;
       binarySearch(temp6,key);
    }
    else
       return 0;
}

int main()
{
    int n, b, a = 0, value,key;
    for (; a < 1;)
    {
        printf("\n1. Insert \n");
        printf("2. Display tree Inorder \n");
        printf("3. Search a element in the tree \n");
        printf("4. Exit from queue \n");
        printf("Enter your choice :- ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter data / value :- ");
            scanf("%d", &value);
            if (root == NULL)
                insertRo(value);
            else if (value < root->data)
                insertLf(value);
            else
                insertRt(value);
            break;

        case 2:
            inordertraversal(root);
            break;

        case 3:
            printf("Which element you want to search :-  ");
            scanf("%d",&key);
            b = binarySearch(root,key);
            if (b > 0)
                printf("\n\nElement is found in the tree !!!!\n\n");
            else
                printf("\n\nElement is not found in the tree !!!!\n\n");
            break;

        default:
            a = 1;
        }
    }
    printf("\nYou are exited !!\n");
    return 0;
}