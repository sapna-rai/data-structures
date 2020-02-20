#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;

Node *front = NULL;
Node *rear = NULL;

void enqueue(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if (rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    // printf("Front is pointing to %p\n", front);
    // printf("Rear is pointing to %p\n", rear);

}

void dequeue()
{
    Node *temp = front;
    if (temp != NULL)
    {
        front = temp->next;
        free(temp);
        if (front == NULL)
        {
            rear = NULL;
        }
    }
}

void print()
{
    Node *temp = front;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int isEmpty()
{
    return front == NULL;
}

int main()
{
    int choice;
    int number;
    do
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Print\n");
        printf("4.Exit:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to enqueue:\t");
            scanf("%d", &number);
            enqueue(number);
            break;
        case 2:
            if (isEmpty())
            {
                printf("Queue is Empty\n");
            }
            else
            {
                dequeue();
                printf("Elements left are:\n");
                print();
            }
            break;
        case 3:
            printf("Elements are:\n");
            print();
            break;
        }
    }while (choice != 4);
    return 0;
    }