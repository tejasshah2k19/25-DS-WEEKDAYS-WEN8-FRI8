#include <stdio.h>

struct student
{
    char name[30]; // 8_8
    int m, s, e;   // 8_8
    float perc;
    char grade; // P , F
};

// 3 student -> array of structure -->

int main()
{
    struct student s;

    // printf("\n %d ",sizeof(s));
    // printf("\n %d ",sizeof(struct student));

    return 0;
}