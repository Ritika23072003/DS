#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* left;
  struct Node* right;
};
struct Node* createNode(int data) {
  struct Node* node = (struct Node*) malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node; }
void DFS(struct Node* node) {
  if (node == NULL) {
    return; }
  printf("%d ", node->data);
  DFS(node->left);
  DFS(node->right); }
int main() {
  struct Node* root = createNode(4);
  root->left = createNode(48);
  root->right = createNode(71);
  root->left->left = createNode(25);
  root->left->right = createNode(31);
  printf("DFS: ");
  DFS(root);
  printf("\n");
  return 0;
}
