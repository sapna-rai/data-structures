#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;
Node *start = NULL;

void insert(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        Node *temp2 = start;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}
void delete (int target)
{
    Node *previous = NULL;
    Node *temp = start;
    // temp = start;
    while (temp != NULL && temp->data != target)
    {
        previous = temp;
        temp = temp->next;
    }
    if (temp != NULL)
    {
        if (start == temp)
        {
            start = temp->next;
        }
        else
        {
            previous->next = temp->next;
        }
        free(temp);
    }
    else
    {
        printf("Element not found\n");
    }
}
void reverse()
{
    Node *previous = NULL;
    Node *temp = start;
    Node *next = NULL;

    while (temp != NULL)
    {
        next = temp->next;
        temp->next = previous;
        previous = temp;
        temp = next;
    }
    start = previous;
}
void print()
{
    Node *temp = start;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int choice;
    int number;

    do
    {
        printf("1.to insert\n");
        printf("2.to delete\n");
        printf("3.to reverse\n");
        printf("4.to print\n");
        printf("5.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the element to insert:\t");
            scanf("%d", &number);
            insert(number);
            break;
        case 2:
            printf("Enter the element to delete:\t");
            scanf("%d", &number);
            delete (number);
            printf("Elements left are:\n");
            print();
            break; 
        case 3:
            reverse();
            printf("reversed elements are:\n");
            print();
            break;       
        case 4:
            printf("elements are:\n");
            print();
            break;
        }
    } while (choice != 5);

    return 0;
}
