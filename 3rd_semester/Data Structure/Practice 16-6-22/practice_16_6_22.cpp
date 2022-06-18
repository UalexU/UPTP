// TREES //
// Unordered - Left, root, right
// Preorder traversal - Root, Left, Right
// Postorder traversal - Left, Right, Root
#include <iostream>
using namespace std;

class node
{
    int data;
    node *temp = new node();
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
};

// insert a node

node *insert(node *node, int key)
{

    // Return a new node if the tree is empty

    if (node == NULL)
        return newNode(key);

    // Traverse to the right place and insert the node

    if (key < node->data)
        node->left = insert(node->left, key);

    return node;
}
