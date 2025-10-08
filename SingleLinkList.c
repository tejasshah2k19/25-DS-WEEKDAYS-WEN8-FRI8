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

void removeNode()
{
    struct node *p;
    p = head;

    while (p->next != last)
    {
        p = p->next;
    }
    p->next = NULL;
    free(last);
    last = p;
}

void addNodeBEG(int data)
{
    struct node *tmp;
    if (head == NULL)
    {
        addNode(data);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = head;
        head = tmp;
    }
}

void removeNodeBEG()
{
    // release
    struct node *p = head; 
    head = head->next; 
    free(p);
}


void searchNode(int key){
    //
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
        printf("\n1 For Add Node \n2 For List All Nodes\n3 For Remove Node\n4 for Add Node : Beg\n5 For Remove : BEG");

        printf("\n6 For Search Node ");
        printf("\nEnter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            displayList();
            break;
        case 3:
            removeNode();
            break;
        case 4:
            printf("\nEnter number");
            scanf("%d", &num);
            addNodeBEG(num);
            break;
        case 5:
            removeNodeBEG();
            break;

        case 6:
            printf("\nEnter node value that you want to search ?");
            scanf("%d", &num);
            searchNode(num); //found not found 
        default:
            break;
        }
    }

    return 0;
}