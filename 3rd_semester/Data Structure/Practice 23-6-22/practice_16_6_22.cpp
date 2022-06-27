// TREES // 
/*
Student: Alex Villalba (IFE)
Date: 23-06-22  
Inordered - Left, root, right
Preorder traversal - Root, Left, Right
Postorder traversal - Left, Right, Root
*/
#include <iostream>
using namespace std;


//Structured variable (or object) containing at least one field whose type is a pointer type.
struct node
{
    int data; // Data stored in this node
    node *left; //This is the left child node
    node *right; //This is the right child node
};
//Create a new node
node* GetNewNode(int data){
    node* temp = new node();
    temp -> data = data;
    temp -> left = temp -> right = nullptr; 
    // (*temp).data = data; 
    return temp;
}

// Insert nodes function

node* InsertNodes(node *root, int data){
    if (root == NULL)
        root = GetNewNode(data); // Create a new node using the data we input in the main function 

    else if (data <= root->data)
        root -> left = InsertNodes(root->left, data);

    else 
        root->right = InsertNodes(root->right,data);

    return root;
}

// Search value function

void InOrderTraversal(node *root){
    if (root == NULL)
        return; 
    InOrderTraversal(root -> left);
    cout << root -> data << "->";
    InOrderTraversal(root->right);
}

void PreOrderTraversal(node *root){
    if (root == NULL)
        return; 
    cout << root -> data << "->";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

}

void PostOrderTraversal(node *root){
    if (root == NULL)
        return; 
    PreOrderTraversal(root->right);
    PreOrderTraversal(root->left);
    cout << root -> data << "->";

}


int main(){
    int numToSearch; 
    node* root; //Pointer to the 'root' of the data structure (tree) node
    root = NULL; // Setting the tree empty 
    root = InsertNodes(root /*We pass the address of the root*/, 0 /*The value inserted in the new node*/);
    root = InsertNodes(root,1);
    root = InsertNodes(root,2);
    root = InsertNodes(root,3);

    cout << "-In Order-" << endl;
    InOrderTraversal(root);
    cout << "NULL" << endl;

    cout << "-Preorder-" << endl;
    PreOrderTraversal(root);
    cout << "NULL" << endl;
    
    cout << "-Postorder-" << endl;
    PostOrderTraversal(root);
    cout << "NULL" << endl;

    return 0;
}