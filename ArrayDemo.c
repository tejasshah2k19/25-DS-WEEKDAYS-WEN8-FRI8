#include <stdio.h>
#define SIZE 5

int a[SIZE]; // global variable

void inputArray()
{
    int i; // local
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter value : ");
        scanf("%d", &a[i]);
    }
}
// time complexity -> O(n)

void printArray()
{
    int i;
    printf("\nElements in the Array: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d", a[i]);
    }
} // time complexity -> O(n)

void addValue(int location, int value)
{
    int i;
    int index = location - 1; // converting to 0-based index
    for (i = SIZE - 1; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = value; // inserting value at the specified location
}

void removeValue(int location)
{
    int i;
    for (i = location - 1; i < SIZE; i++)
    {
        a[i] = a[i + 1];
    }
}

// time complexity --->
void bubbleSort()
{
    int i, x;
    int tmp;
    //n=> 5*5 =>25 
    int count = 0; 
    for (x = 0; x < SIZE; x++) // SIZE
    {
        for (i = 0; i < SIZE - 1; i++) // SIZE
        {
            count++;
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }
    // SIZE*SIZE
    // O(n*n)
    // O(n^2)

    printf("\n Count = %d",count);
}

int main()
{

    int choice;
    int location, value;
    // 0:false
    // all true
    while (1)
    {
        printf("\n0. Exit\n1. Add Value\n2. Remove Value\n3. Display\n4. Sort Array\n5. Search Value\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Location and Value");
            scanf("%d%d", &location, &value);
            addValue(location, value);
            break;
        case 2:
            removeValue(location);
            break;
        case 3:
            printArray();
            break;
        case 4:
            bubbleSort();
            break;
        default:
            break;
        }
    }
    return 0;
}
