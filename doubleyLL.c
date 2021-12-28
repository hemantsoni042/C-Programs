#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *temp1, *temp2, *temp3, *temp4, *temp5, *temp6;
struct node *newno;

void insertSTll()
{
    if (head == NULL)
    {
        newno = (struct node *)malloc(sizeof(struct node));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->next = NULL;
        newno->prev = NULL;
        head = newno;
        temp1 = newno;
    }
    else
    {
        newno = (struct node *)malloc(sizeof(struct node));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->next = head;
        temp1->prev = newno;
        temp1 = newno;
        head = newno;
    }
}

void deletionSTll()
{
    if (head == NULL)
    {
        printf("\n\nUnderflow!!!\n\n");
    }
    else
    {
        printf("\n%d is deleted\n", head->data);
        head = head->next;
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
        temp6 = head;
        while (temp6 != NULL)
        {
            printf(" %d ", temp6->data);
            temp6 = temp6->next;
            if (temp6 != NULL)
            {
                printf("->");
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
        printf("\n1. Insert in linklist at start \n");
        printf("2. Insert in linklist at last \n");
        printf("3. Insert in linklist at a certain position \n");
        printf("4. Delete from starting  \n");
        printf("5. Delete from last  \n");
        printf("6. Delete from a certain position  \n");
        printf("7. Display  \n");
        printf("8. Search a value  \n");
        printf("9. Exit from linklist \n");
        printf("Enter your choice :- ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertSTll();
            break;

            // case 2:
            //     insertLAll();
            //     break;

            // case 3:
            //     insertASll();
            //     break;

            case 4:
                deletionSTll();
                break;

            // case 5:
            //     deletionLAll();
            //     break;

            // case 6:
            //     deletionASll();
            //     break;

        case 7:
            displayll();
            break;

        default:
            a = a + 1;
            free(temp1);
            free(temp2);
            free(head);
            free(newno);
            printf("\nYou are exited");
        }
    }
    return 0;
}