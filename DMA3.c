#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int m, s, e;
};

int main()
{

    int a; // 4 byte
    int *p;
    int *arr;

    struct student s; //implicit 
    struct student *x; 


    p = malloc(sizeof(int)); // calloc malloc
    arr = calloc(10, sizeof(int));

    printf("\nEnter name and marks of three subjects ");
    scanf("%s%d%d%d",s.name,&s.m,&s.s,&s.e); 


    printf("\nEnter name and marks of three subjects ");
    x = malloc(sizeof(struct student)); 
    scanf("%s%d%d%d",x->name,&x->m,&x->s,&x->e); 


    printf("Name  Maths  SCi  Eng");
    printf("\n%s   %d    %d    %d",s.name,s.m,s.s,s.e);
    printf("\n%s   %d    %d    %d",x->name,x->m,x->s,x->e);
    

    //
    // malloc(10);  // single block of 10 byte
    // calloc(5,4); // 5 items each of 4 byte => 20 byte

    // scan

    // print

    return 0;
}