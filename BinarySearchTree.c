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

void preodertraversal(struct node *temp6)
{
    if (temp6 == NULL)
        return;
    printf("%4d", temp6->data);
    preodertraversal(temp6->left);
    preodertraversal(temp6->right);
}

void postordertraversal(struct node *temp7)
{
    if (temp7 == NULL)
        return;
    postordertraversal(temp7->left);
    postordertraversal(temp7->right);
    printf("%4d", temp7->data);
}

int main()
{
    int n, a = 0, value;
    for (; a < 1;)
    {
        printf("\n1. Insert \n");
        printf("2. Display tree Inorder \n");
        printf("3. Display tree Preorder \n");
        printf("4. Display tree Postorder \n");
        printf("5. Exit from queue \n");
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
            preodertraversal(root);
            break;

        case 4:
            postordertraversal(root);
            break;

        default:
            a = 1;
        }
    }
    printf("\nYou are exited !!\n");
    return 0;
}