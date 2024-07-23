#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

    struct node* createnode(int data){
         struct node *n ; // creating a node pointer
        n = (struct node *) malloc(sizeof(struct node)); // allocating memory in the heap
        n->data = data;  // Setting the data
        n->left = NULL;  // Setting the left and right children to null
        n->right = NULL;  // Setting the left and right children to null
        return n;  // Finally  returning the created node

    }

    int main(){
          // Constructing the root node  - Using Function (Recomanded)
        struct node *root = createnode(2);
        struct node *root1 = createnode(3);
        struct node *root2 = createnode(4);
 
 // Linking the rooot node with left and right children
        root->left = root1;
        root->right = root2;

        return 0;
    }