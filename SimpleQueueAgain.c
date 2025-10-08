#include <stdio.h>
#define S 5

int q[S];
int f = -1;
int r = -1;

void enQueue(int data)
{
    if (r == S - 1 && f == 0)
    {
        printf("Full");
    }
    else if (r == f - 1)
    {
        printf("Full");
    }
    else
    {
        if (r == S - 1)
        {
            r = 0;
            q[r] = data;
        }
        else
        {
            r++;
            q[r] = data;

            if (f == -1)
                f = 0;
        }
    }
}

void deQueue()
{
    if (f == -1)
    {
        printf("underflow");
    }
    else if (f == r)
    {
        printf(" %d removed ", q[f]);
        f = -1;
        r = -1;
    }
    else if (f == S - 1)
    {

        printf(" %d removed ", q[f]);
        f = 0;
    }
    else
    {
        printf(" %d removed ", q[f]);

        f++;
    }
}

void display()
{
    int i;
    if (f == -1)
    {
        printf(" underflow ");
    }
    else if (f <= r)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {

        for (i = f; i < S; i++)
        {
            printf(" %d", q[i]);
        }

        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

int main()
{

    return 0;
}



/*

    struct student {    
        char name[30];
        int maths,sci,eng;     
        *next
    }

    struct student s[500]; // 1:42  500*42 => 

    struct student *s;//s => 46 ,46 , 46 ,46,46,46,46,46,46,46,46,46     


struct std *s;
    struct std x[350];
    //20 * 350 => 7000 
     //2500


    s = malloc(sizeof(struct std));

    s->name 
    s->maths 
 
    int x; 
    int *p; 


*/