// write a procedure to traverse a tree stored with child/sibling links.
#include <bits/stdc++.h>

using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = temp->right = NULL;

  return temp;
}

void printNode(struct Node *node)
{
  if (node == NULL)
    return;

  printNode(node->left);

  cout << node->data << " ";

  printNode(node->right);
}

int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  printNode(root);
  cout << endl;
}