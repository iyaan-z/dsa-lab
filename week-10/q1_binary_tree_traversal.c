/*
Q1. Create structure of a Binary tree, make 3 nodes, traverse in 3 ways.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *left,*right;
};
struct Node *create(int val){
    struct Node *n=malloc(sizeof(struct Node));
    n->data=val;
    n->left=n->right=NULL;
    return n;
}
void pre(struct Node *root){
    if(root==NULL) return;
    printf("%d ",root->data);
    pre(root->left);
    pre(root->right);
}
void in(struct Node *root){
    if(root==NULL) return;
    in(root->left);
    printf("%d ",root->data);
    in(root->right);
}
void post(struct Node *root){
    if(root==NULL) return;
    post(root->left);
    post(root->right);
    printf("%d ",root->data);
}
int main(){
    struct Node *root=create(20);
    root->left=create(10);
    root->right=create(30);
    printf("Preorder: ");
    pre(root);printf("\n");
    printf("Inorder: ");
    in(root);printf("\n");
    printf("Postorder: ");
    post(root);printf("\n");
    return 0;
}
