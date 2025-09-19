#include<stdio.h>


struct student{
    int rollNo;
    char name[20]; 
}; 

int main(){


    struct student s,t; 
    struct student *p;
    
    p = &t; 
    
    printf("Enter roll num and name");
    scanf("%d%s",&s.rollNo,&s.name);

    printf("Enter roll num and name");
    scanf("%d%s",&p->rollNo,&p->name);



    return 0;
}