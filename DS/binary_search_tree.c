#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* insert(struct node *root,int data){
    if(root==NULL){
        struct node *temp;
        temp=malloc(sizeof(struct node));
        temp->data=data;
        return temp;
    }
    if(root->data > data){
        root->left=insert(root->left,data);
    }else{
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
void main(){
    printf("Ritika   2100320130140\n");
    int n;
    printf("Enter number of terms in a tree\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    struct node *root;
    for(int i=0;i<n;i++){
        root=insert(root,A[i]);
        printf("%d",root->data);
    }
    printf("Inorder Traversal:\t");
    inorder(root);
}
