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
  return node;
}
void BFS(struct Node* root) {
  if (root == NULL) {
    return;
  }
  struct Node* queue[100];
  int front = 0;
  int rear = 0;
  queue[rear++] = root;
  while (front != rear) {
    struct Node* node = queue[front++];
    printf("%d ", node->data);
    if (node->left != NULL) {
      queue[rear++] = node->left;
    }
    if (node->right != NULL) {
      queue[rear++] = node->right;
    }
  }
}
int main() {
  printf("Ritika \n2100320130140\n");
  struct Node* root = createNode(45);
  root->left = createNode(50);
  root->right = createNode(36);
  root->left->left = createNode(12);
  root->left->right = createNode(65);
  printf("BFS: ");
  BFS(root);
  printf("\n");
  return 0;
}
