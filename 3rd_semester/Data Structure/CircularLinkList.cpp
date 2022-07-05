#include <iostream>
using namespace std;

/*
Circular link list
Alex Villalba IFE
*/

struct node{
    int data;
    node* next;
    node* previous;
};

node NewNode(node *root, int value){
    node *root = new node(); 
    root -> data = value; 
    root -> next = nullptr; 
    root -> previous = nullptr; 
}

int main(){

    //We create a link list 
    node *zero = new node();
    node *one = new node();
    node *two = new node();
    node *three = new node();
    node *fourth = new node();

    //Create the value of the link list

    zero ->data = 0;

    return 0;
}