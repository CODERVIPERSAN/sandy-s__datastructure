#include<stdio.h>
#include"bst.c"
int main(int argc, char const *argv[])
{
    root = insert(root,45);
    root = insert(root,35);
   root = insert(root,55);
   root = insert(root,30);
   root = insert(root,4);

    inorder(root);


    printf("|%d|",(FindMin(root))->data);

    printf("|%d|",FindMax(root)->data);


    root = delete(root,35);

    inorder(root);


    return 0;
}
