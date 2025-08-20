#include <stdio.h>
#define SIZE 5

int a[] = {10, 2, 34, 5, 6};

void printArray()
{
    int i;
    printf("\nElements in the Array: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d", a[i]);
    }
}
void selectionSort()
{
    int i, j, min, tmp;

    for (j = 0; j < SIZE; j++)
    {
        min = j;
        for (i = j + 1; i < SIZE; i++)
        {
            if (a[i] < a[min])
            {
                min = i;
            }
        }
        // swap
        tmp = a[j];
        a[j] = a[min];
        a[min] = tmp;
    }
}

int main()
{

    printArray();
    selectionSort();
    printArray();
    return 0;
}