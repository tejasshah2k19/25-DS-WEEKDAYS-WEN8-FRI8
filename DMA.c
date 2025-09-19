#include <stdio.h>

int main()
{

    int a;      // 4  byte  --> implicit --> allocate
    int x[500]; // 500 * 4 byte -> 25LAC

    // a 4 byte XX -->

    // 10 elements -> 490W
    // 600 elements -> _______underflow

    return 0;
} // implicit ->  release

// main } => logical end ->

// 1: 2: 3: 4:

// explicit -> DMA
