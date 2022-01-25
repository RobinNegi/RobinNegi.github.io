//to insert in a tree
#include <bits/stdc++.h>
using namespace std;
//define a structure of node
struct bstNode
{
    int data;
    bstNode *left;
    bstNode *right;
};

//function to create node of a bst
bstNode *newNode(int data)
{
    bstNode *node = new bstNode();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

//function to insert a node at desired location
bstNode *insert(bstNode *root, int data)
{
    if (root == NULL)
        root = newNode(data);
    else if (root->data >= data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

//main function

int main()
{ //create a root node null
    bstNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 11);
    root = insert(root, 12);
    cout << "Success";

    return 0;
}