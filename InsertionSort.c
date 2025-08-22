#include <stdio.h>
#define SIZE 6
int a[] = {17, 15, 19, 9, 20, 6};

void insertionSort()
{
    int i, j;
    int tmp;
    for (i = 1; i < SIZE; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (tmp < a[j])
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }

        a[j + 1] = tmp;
    }
}

void display()
{
    int i;
    printf("\nElements in the array : ");
    for (i = 0; i < SIZE; i++)
    {
        printf("  %d", a[i]);
    }
}

int main()
{

    display();
    insertionSort();
    display();
    return 0;
}