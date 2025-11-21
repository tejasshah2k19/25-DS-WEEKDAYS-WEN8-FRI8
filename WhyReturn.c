#include <stdio.h>

int add(int a, int b)
{
    int c = a + b; // add
    return c; 
    
}

int main()
{
    int a = 10; // main
    int b = 20; // main
    int c; 
    c = add(a, b);  // parameter argument
    
    printf("%d ", c);

    return 0;
}