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
        printf("1.To insert\n");
        printf("2.Delete\n");
        printf("3.To print\n");
        printf("4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert:\t");
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
            printf("Elements are:\n");
            print();
            break;
        }
    } while (choice != 4);

    return 0;
}