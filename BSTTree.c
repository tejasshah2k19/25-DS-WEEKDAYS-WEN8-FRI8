#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data)
{ // 50,100
    if (root == NULL)
    { // 50
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {

        if (data > root->data)
        {
            // right
            root->right = addNode(root->right, data);
        }
        else
        {
            // left
            root->left = addNode(root->left, data);
        }
    }

    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);        // left
        printf(" %d ", root->data); // root
        inOrder(root->right);       // right
    }
}

    /*
                    40

            30              50
        
        25      35      45      60   
    
    
    */

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data); // root
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root != NULL){

        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data); // root
        
    }
}

int main()
{

    struct node *root = NULL;
    root = addNode(root, 40);
    addNode(root, 30);
    addNode(root, 50);
    addNode(root, 25);
    addNode(root, 35);
 
    addNode(root, 60);
    addNode(root, 45);

    // printf(" %d %d %d %d", root->data, root->left->data, root->right->data, root->right->right->data); // 50 25 100 150

    printf("\nInorder => ");
    inOrder(root); //
    printf("\nPre Order => ");
    preOrder(root);
    printf("\nPost Order => ");
    postOrder(root);

    return 0;
}