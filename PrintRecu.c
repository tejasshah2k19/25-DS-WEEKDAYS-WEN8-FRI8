#include <stdio.h>

void printNum(int num)
{

    num--;
    if (num != 0)
        printNum(num);
    printf("%d ", num); // 5
}

void sub()
{
    printf("2");
}
void add()
{
    printf("1");
    sub();
    printf("3");
}

// void printM(int x)//10 10
// {
//     printf(" %d ", x);//10 10
//     if (x != 20)
//         printM(++x);//printM(10)
// // }
// void printM(int x)//10 10
// {
//     printf(" %d ", x);//10 10
//     if (x != 20)
//         printM(x++);//printM(10)
// }

// void printM(int x) // 10 11
// {
//     if (x != 15)
//         printM(++x); 
//     printf(" %d ", x);  
// }


void printM(int x) // 10 
{
   
    printf(" %d ",x);
    if(x <= 13){
        printM(++x);//11 
    }
    printf(" %d ",x);

}
int main()
{

    // printNum(5); // 1 2 3 4 5

    printM(10);

    return 0;
}













