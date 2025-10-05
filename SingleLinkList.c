#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data; // 4 byte
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int data)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void displayList()
{

    struct node *p;
    p = head;

    while (p != NULL)
    {
        printf(" %d", p->data); // 10  20  30
        p = p->next;
    }
}

int main()
{

    // addNode(10);
    // addNode(20);
    // addNode(30);
    // addNode(40);
    // addNode(50);

    // printf(" %d  %d  %d  %d ",head->data,head->next->data,head->next->next->data,head->next->next->next->data);
    // displayList();

    int choice, num;

    while (1)
    {
        printf("\n0 For Exit");
        printf("\n1 For Add Node \n2 For List All Nodes\n3 For Remove Node\nEnter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            displayList();
            break;
        case 0:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}