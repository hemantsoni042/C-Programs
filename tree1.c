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

void insertRo()
{
    int value;
    root = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of root :- ");
    scanf("%d", &value);
    root->data = value;
    root->left = NULL;
    root->right = NULL;
}

void insertLf()
{
    int value;
    printf("Enter value of left child :- ");
    scanf("%d", &value);

    if (root->left == NULL)
    {
        if (value <= root->data)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            root->left = newno;
        }
        else
        {
            printf("\n\nInsertion is not possible given input is greater than or equal root !!\n\n");
        }
    }
    else
    {
        
    }
}

void insertRt()
{
    int value;
    printf("Enter value of left child :- ");
    scanf("%d", &value);

    if (root->right == NULL)
    {
        if (value > root->data)
        {
            newno = (struct node *)malloc(sizeof(struct node));
            newno->data = value;
            newno->left = NULL;
            newno->right = NULL;
            root->right = newno;
        }
        else
        {
            printf("\n\nInsertion is not possible given input is lesser than root !!\n\n");
        }
    }
}

delete ()
{
}

void inordertraversal(struct node *temp3)
{

    if (temp3 == NULL)
        return;
    inordertraversal(temp3->left);
    printf("%4d", temp3->data);
    inordertraversal(temp3->right);
}

int main()
{
    int n, a = 0;
    for (; a < 1;)
    {
        printf("\n1. Insert root \n");
        printf("2. Insert left child \n");
        printf("3. Insert right child \n");
        printf("4. Delete \n");
        printf("5. Display tree \n");
        printf("6. Exit from queue \n");
        printf("Enter your choice :- ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertRo();
            break;

        case 2:
            insertLf();
            break;

        case 3:
            insertRt();
            break;

        case 4:
            delete ();
            break;

        case 5:
            inordertraversal(root);
            break;

        default:
            a = 1;
        }
    }
    printf("\nYou are exited !!\n");
    return 0;
}