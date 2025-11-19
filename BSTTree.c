#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};


struct node* addNode(struct node *root,int data){//50,100
    if(root == NULL){//50 
        root = malloc(sizeof(struct node));
        root->data = data; 
        root->left= NULL;
        root->right=NULL; 
    }else{

        if(data > root->data){
            //right 
            root->right = addNode(root->right,data);
        }else{
            //left 
            root->left = addNode(root->left,data);
        }

    }

    return root; 

}


int main()
{

    struct node *root = NULL;
    root = addNode(root, 50);


    addNode(root, 100); // 50root,100


    addNode(root, 25);
    addNode(root, 150);

    printf(" %d %d %d %d", root->data, root->left->data, root->right->data, root->right->right->data); // 50 25 100 150

    return 0;
}