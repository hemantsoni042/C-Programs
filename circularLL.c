#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *addrs;
};

struct node *head = NULL;
struct node *temp1, *temp2, *temp3, *temp4, *temp5, *temp6;
struct node *newno;

void insertll()
{
    if (head == NULL)
    {
        newno = (struct node *)malloc(sizeof(struct node));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->addrs = NULL;
        head = newno;
        temp2 = newno;
    }
    else
    {
        newno = ((struct node *)malloc(sizeof(struct node)));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->addrs = head;
        temp2->addrs = newno;
        temp2 = newno;
    }
}

void deletell()
{
    if (head == NULL)
    {
        printf("\n\nUnderflow!!!\n\n");
    }
    else
    {
        temp4 = head;
        while (1)
        {
            if (temp4->addrs->addrs != head)
                temp4 = temp4->addrs;
            else
                break;
        }
        printf("\n%d is deleted\n", temp4->addrs->data);

        temp4->addrs = head;
    }
}

void displayll()
{
    if (head == NULL)
    {
        printf("\n\nList is Empty!!!\n");
    }
    else
    {
        printf("\n");
        temp3 = head;
        while (1)
        {
            printf(" %d ", temp3->data);
            temp3 = temp3->addrs;
            if (temp3 != head)
            {
                printf("->");
            }
            else
            {
                break;
            }
        }
        printf("\n");
    }
}

int main()
{
    int n, a = 0;
    while (a < 1)
    {
        printf("\n1. Insert in linklist  \n");
        printf("2. Delete in linklist  \n");
        printf("3. Display  \n");
        printf("4. Exit from linklist \n");
        printf("Enter your choice :- ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertll();
            break;

        case 2:
            deletell();
            break;

        case 3:
            displayll();
            break;

        default:
            a = a + 1;
            free(temp2);
            free(temp3);
            free(temp4);
            free(head);
            free(newno);
            printf("\nYou are exited");
        }
    }
    return 0;
}