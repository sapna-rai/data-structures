#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;
Node *start;
Node *previous;
Node *temp;

void insert(int data)
{

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    previous = NULL;
    temp = start;
    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        while (temp != NULL && newNode->data > temp->data)
        {
            previous = temp;
            temp = temp->next;
        }
        if (previous == NULL)
        {
            start = newNode;
            newNode->next = temp;
        }
        else
        {
            previous->next = newNode;
            newNode->next = temp;
        }
    }
}
void print()
{
    Node *temp2 = start;
    while (temp2 != NULL)
    {
        printf("%d\n", temp2->data);
        temp2 = temp2->next;
    }
}

int main()
{
    int choice;
    int number;
    start = NULL;
    do
    {
        printf("1.To insert\n");
        printf("2.To print:\n");
        printf("3.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert:\t");
            scanf("%d", &number);
            insert(number);
            break;
        case 2:
            printf("Elements are:\n");
            print();
        }
    } while (choice != 3);

    return 0;
}