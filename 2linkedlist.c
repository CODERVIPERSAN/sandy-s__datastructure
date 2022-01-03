
#include<stdlib.h>

typedef struct node{

    int data;
    struct node*left;
    struct node*right;

}node;

node*create(int data){
    node*temp = malloc(sizeof(node));
    temp->left=NULL;
    temp->right=NULL;
    temp->data = data;
    return temp;
}
