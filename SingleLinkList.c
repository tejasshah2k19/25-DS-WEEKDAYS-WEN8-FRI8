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

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    printf(" %d  %d  %d  %d ",head->data,head->next->data,head->next->next->data,head->next->next->next->data);

    return 0;
}