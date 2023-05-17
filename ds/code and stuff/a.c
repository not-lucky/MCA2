

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int info;
  struct Node *left, *right;
} typedef Node;

void insert(Node **node, int v) {
  if (*node == NULL) {
    *node = (Node *)malloc(sizeof(Node));
    (*node)->info = v;
    (*node)->left = (*node)->right = NULL;
    return;
  }

  if (v < (*node)->info) {
    insert(&(*node)->left, v);
  } else {
    insert(&(*node)->right, v);
  }
}

void inorder(Node *node) {
  if (node == NULL) return;
  inorder(node->left);
  printf("%d -> ", node->info);
  inorder(node->right);
}

void preorder(Node *node) {
  if (node == NULL) return;
  printf("%d -> ", node->info);
  preorder(node->left);
  preorder(node->right);
}

void postorder(Node *node) {
  if (node == NULL) return;
  postorder(node->left);
  postorder(node->right);
  printf("%d -> ", node->info);
}

void tot(Node *node, int *total) {
  if (node == NULL) return;
  (*total)++;
  tot(node->left, total);
  tot(node->right, total);
}

void lea(Node *node, int *leaf) {
  if (node == NULL) return;
  if (node->left == NULL && node->right == NULL) (*leaf)++;

  lea(node->left, leaf);
  lea(node->right, leaf);
}

void left(Node *node, int *leftt) {
  if (node == NULL) return;
  if (node->left != NULL) (*leftt)++;
  left(node->left, leftt);
  left(node->right, leftt);
}

void lef_only(Node *node, int *leftt) {
  if (node == NULL) return;
  if (node->left != NULL && node->right == NULL) (*leftt)++;
  lef_only(node->left, leftt);
  lef_only(node->right, leftt);
}

int main() {
  Node *root = NULL;
  insert(&root, 45);
  insert(&root, 15);
  insert(&root, 79);
  insert(&root, 10);
  insert(&root, 20);
  insert(&root, 55);
  insert(&root, 90);
  insert(&root, 12);
  insert(&root, 50);

  // printf("\nINORDER:\n\n");
  // inorder(root);

  // printf("\nPREORDER:\n\n");
  // preorder(root);

  // printf("\nPOSTORDER:\n\n");
  // postorder(root);

  int leaf = 0, total = 0, left = 0, only_left = 0;
  tot(root, &total);
  lea(root, &leaf);
  lef(root, &left);
  lef_only(root, &only_left);
  printf("total nodes: %d\nleaf nodes(no child): %d\nnodes with left childeren: %d\nnodes with ONLY left children%d\n\n", total, leaf, left, only_left);
}