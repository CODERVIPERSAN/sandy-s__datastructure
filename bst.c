#include"2linkedlist.c"

node*root =NULL;


node* insert(node*root , int data){
    if(root==NULL) {
        root = create(data);
    }
    else if(root->data>data){
        root->left = insert(root->left,data);
    }
    else if(root->data<data){
        root->right= insert(root->right,data);
    }
return root;

}


void inorder(node*root){
    if(root==NULL) return;


        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);

    
}


node*FindMin(node*root){
if(root->left==NULL) return root;

return FindMin(root->left);
}

node*FindMax(node*root){
    if(root->right==NULL) return root;
    return FindMax(root->right);
}



node*delete(node* root,int data){
 if(root==NULL) printf("empty tree");
 else if (root->data<data)  root->right = delete(root->right,data);
else if (root->data>data) root->left = delete(root->left,data);
else{
    if(root->left==NULL && root->right ==NULL){
        free(root);
        return NULL;
    }
    else if(root->left==NULL){
        node*temp = root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL){
        node*temp = root->left;
        free(root);
        return temp;
    }
    node*temp = FindMin(root->right);
    root->data = temp->data;
    root->right = delete(root->right,data);

}
return root;

}



