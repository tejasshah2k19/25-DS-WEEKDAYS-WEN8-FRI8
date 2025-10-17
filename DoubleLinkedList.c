#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
    struct node *prev;

} *head = NULL, *last = NULL;

void addNode(int data)
{

    struct node *tmp;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        tmp->prev = last;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    struct node *p;

    printf("\nAll data: ");
    for (p = head; p != NULL; p = p->next)
    {
        printf(" %d", p->data);
    }
}

void addNodeBeg(int data)
{

    struct node *tmp;

    tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->next = head;
    tmp->prev = NULL;
    head->prev = tmp;
    head = tmp;
}
void removeNodeLast()
{

    last = last->prev;
    free(last->next);
    last->next = NULL;
}

void addNodeAny(int key, int data)
{
}

void removeNodeAny(int key)
{
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);

    display();
    // addNodeBeg(40);
    // search
    // removeNodeBeg();
    // displayASC
    // displayDSC
    addNodeBeg(-10);
    display();
    removeNodeLast();

    addNodeAny(30, 70);

    return 0;
}
