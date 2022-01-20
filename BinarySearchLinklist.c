#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *addrs;
};

struct node *head = NULL;
struct node *temp1, *temp2, *temp3, *temp4, *temp5, *temp6, *temp7, *temp8;
struct node *newno;
int n = 0;

void insertSTll()
{
    if (head == NULL)
    {
        newno = (struct node *)malloc(sizeof(struct node));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->addrs = NULL;
        head = newno;
    }
    else
    {
        temp4 = head;
        newno = (struct node *)malloc(sizeof(struct node));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->addrs = temp4;
        head = newno;
    }
    n++;
}

void insertLAll()
{
    if (head == NULL)
    {
        newno = (struct node *)malloc(sizeof(struct node));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->addrs = NULL;
        head = newno;
        temp1 = newno;
    }
    else
    {
        temp1 = head;
        while (1)
        {
            if (temp1->addrs != NULL)
                temp1 = temp1->addrs;
            else
                break;
        }
        newno = ((struct node *)malloc(sizeof(struct node)));
        printf("Enter value / info of the node :- ");
        scanf("%d", &newno->data);
        newno->addrs = NULL;
        temp1->addrs = newno;
        temp1 = newno;
    }
    n++;
}

void insertASll()
{
    int n;
    printf("\nEnter data / value / info of node after that insertion takes place :- ");
    scanf("%d", &n);

    temp5 = head;
    while (1)
    {

        if (temp5->data == n)
        {
            newno = ((struct node *)malloc(sizeof(struct node)));
            printf("Enter value / info of the node :- ");
            scanf("%d", &newno->data);
            newno->addrs = temp5->addrs;
            temp5->addrs = newno;
            break;
        }
        else if (temp5->addrs == NULL)
        {
            printf("Given Data is not match with the linklist \n");
            break;
        }
        else
        {
            temp5 = temp5->addrs;
        }
    }
    n++;
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
        head = head->addrs;
    }
    n--;
}

void deletionLAll()
{
    if (head == NULL)
    {
        printf("\n\nUnderflow!!!\n\n");
    }
    else
    {
        temp3 = head;
        while (temp3->addrs->addrs != NULL)
        {
            temp3 = temp3->addrs;
        }
        printf("\n%d is deleted\n", temp3->addrs->data);

        temp3->addrs = NULL;
    }
    n--;
}

void deletionASll()
{
    if (head == NULL)
    {
        printf("\n\nUnderflow!!!\n\n");
    }
    else
    {
        int n, a;
        printf("\nEnter data / value / info of node after that deletion takes place :- ");
        scanf("%d", &n);
        temp6 = head;
        while (a < 1)
        {
            if (temp6->addrs == NULL)
            {
                printf("Given Data is not match with the linklist ");
            }
            else if (temp6->addrs->data == n)
            {
                a++;
            }
            else
            {
                temp6 = temp6->addrs;
            }
        }
        printf("\n%d is deleted\n", temp6->addrs->data);
        temp6->addrs = temp6->addrs->addrs;
    }
    n--;
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
        temp2 = head;
        while (temp2 != NULL)
        {
            printf(" %d ", temp2->data);
            temp2 = temp2->addrs;
            if (temp2 != NULL)
            {
                printf("->");
            }
        }
        printf("\n");
    }
}

void searchLL(int ar[], int value, int lb, int ub)
{
    int index = (lb + ub) / 2;
    if (ar[index] == value)
        printf("Given %d value is find at %d position !!\n", value, index + 1);
    else if (ar[index] > value)
        searchLL(ar, value, 0, index - 1);
    else if (ar[index] < value)
        searchLL(ar, value, index + 1, ub);
    else
        printf("Given %d value is not in the given array !!\n", value);
}

int main()
{
    int l, a = 0, value, ar[n], i;
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
        scanf("%d", &l);
        switch (l)
        {
        case 1:
            insertSTll();
            break;

        case 2:
            insertLAll();
            break;

        case 3:
            insertASll();
            break;

        case 4:
            deletionSTll();
            break;

        case 5:
            deletionLAll();
            break;

        case 6:
            deletionASll();
            break;

        case 7:
            displayll();
            break;

        case 8:
            temp8 = head;
            for (i = 0; i < n; i++,temp8=temp8->addrs)
                ar[i] = temp8->data;

            printf("Which number you want to search in the array :- ");
            scanf("%d", &value);
            searchLL(ar, value, 0, n - 1);
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