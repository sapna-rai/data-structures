#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;
Node *top = NULL;

void push(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    // if (top == NULL)
    // {
    //     top = temp;
    // }
    // else
    // {
    //     Node *temp2 = top;
    //     top = temp;
    //     temp->next = temp2;
    // }
    temp->next = top;
    top = temp;
}
void pop()
{
    Node *previous = NULL;
    Node *temp = top;

    if (temp != NULL)
    {
        if (top == temp)
        {
            top = temp->next;
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
    Node *temp = top;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int number;
    int choice;
    do
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Print\n");
        printf("4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an element which you want to push:\t");
            scanf("%d", &number);
            push(number);
            break;
         case 2:
            pop();
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