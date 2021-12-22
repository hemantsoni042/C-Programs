#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *addrs;
};

struct node *head = NULL;
struct node *temp2, *temp3, *temp4;
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
        
        while (temp4->addrs != head)
        {
            
            temp4 = temp4->addrs;
            
        }
        printf("\n%d is deleted\n", head->data);
        head = head->addrs;
        temp4->addrs = head;
    }
}

void displayll()
{
    if (head == NULL)
    {
        printf("\n\nQueue is Empty!!!\n");
    }
    else
    {
        printf("\n");
        temp3 = head;
        while (1)
        {
            printf(" %d ", temp3->data);
            temp3 = temp3->addrs;
            printf("\n");
            if(temp3 == head)
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
        printf("\n1. Insert in queue  \n");
        printf("2. Delete in queue  \n");
        printf("3. Display  \n");
        printf("4. Exit from queue \n");
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