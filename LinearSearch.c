#include <stdio.h>
#define S 10

void linearSearch(int a[], int key)
{
    int i;
    int found = 0; // not found
    for (i = 0; i < S; i++)
    {
        if (a[i] == key)
        {
            found = 1; // found
            break;
        }
    }

    if(found == 1){
        printf("\n %d Found ",key);
    }else{
        printf("\n %d not Found ",key);
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    linearSearch(a, 25); // not found
    linearSearch(a, 50); // found

    return 0;
}