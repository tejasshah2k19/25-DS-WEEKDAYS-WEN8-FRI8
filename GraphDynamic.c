#include <stdio.h>
#include <stdlib.h>
struct edge
{
    int src;
    int dest;
    int isVisited; 
};

int totalVertex;
int totalEdges;
int i;
struct edge *e;
int src, dest;

 
int main()
{

    printf("How many Vertex you have?");
    scanf("%d", &totalVertex);
    printf("How many edges you have?");
    scanf("%d", &totalEdges); // 4

    totalEdges = totalEdges * 2; // 8

    e = calloc(totalEdges, sizeof(struct edge));

    /*
         source        destination
     0:   40              50
     1:   50              40
          50              60
          60              70
          70              40

    */
    for (i = 0; i < totalEdges; i++)
    {
        printf("\nEnter Source and Destination : ");
        scanf("%d%d", &src, &dest);
        e[i].src = src;
        e[i].dest = dest;

        i++;

        e[i].src = dest;
        e[i].dest = src;
    }

    for (i = 0; i < totalEdges; i++)
    {
        printf("\n%d  %d", e[i].src, e[i].dest);
    }

    // 40

    int search = 10;

    for (i = 0; i < totalEdges; i++)
    {
        if (e[i].src == search)
        {
            printf(" \n\n %d", e[i].dest);
        }
    }
    /*
        10  20
        10  30
        20  40
        20  70
        20  90
        90  40
        40  70
        40  50
        50  60
        60  30
        30  70


    */

   
    return 0;
}