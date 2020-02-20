#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};

typedef struct Node Node;
Node *start = NULL;

void insert(int data)
{
    Node *temp = (Node *)malloc(sizeof(malloc));
    temp->data = data;
    temp->previous = NULL;
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
        temp->previous = temp2;
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
        printf("2.To print\n");
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
            break;
        }
    } while (choice != 3);

    return 0;
}
