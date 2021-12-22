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
struct node *temp3;

void root1(int value)
{
    root = (struct node *)malloc(sizeof(struct node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;
}

struct node *left1(struct node *temp1, int value)
{
    newno = (struct node *)malloc(sizeof(struct node));
    newno->data = value;
    newno->left = NULL;
    newno->right = NULL;
    temp1->left = newno;
    return newno;
}

struct node *right1(struct node *temp2, int value)
{
    newno = (struct node *)malloc(sizeof(struct node));
    newno->data = value;
    newno->left = NULL;
    newno->right = NULL;
    temp2->right = newno;
    return newno;
}

void inordertraversal(struct node *temp3)
{
    if (temp3 == NULL)
        return;
    inordertraversal(temp3->left);
    printf("%d ", temp3->data);
    inordertraversal(temp3->right);
}

int main()
{
    root1(9);
    left1(root, 7);
    right1(root, 11);
    left1(root->left, 5);
    right1(root->left, 8);
    right1(root->right, 13);
    left1(root->right, 10);

    inordertraversal(root);

    return 0;
}