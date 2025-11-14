#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *left; 
    struct node *right; 
}*root=NULL;

int main(){


    struct node *leftChild,*rightChild; 

    root = malloc(sizeof(struct node));
    root->data = 100;
    root->left = NULL;
    root->right = NULL;


    leftChild = malloc(sizeof(struct node));
    leftChild->data = 200;
    leftChild->left = NULL;
    leftChild->right = NULL;

    rightChild = malloc(sizeof(struct node));
    rightChild->data = 300;
    rightChild->left= NULL;
    rightChild->right=NULL;

    root->left = leftChild; 
    root->right = rightChild;

    printf(" %d %d %d",root->data,root->left->data,root->right->data);




    return 0; 
}