#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *previous;
};

void InsertrDouble(node *temp, int x){
    
}

int main(void){
    //Create both head and tail temporary nodes
    node *head; 
    node *tail;

    node *zero = new node();
    zero -> data = 0;
    zero -> next = zero -> previous = nullptr; 
    head = tail = zero; // Set head and tail equal to the null node I created before

    node *one = new node(); 
    one -> data = 1; 
    one -> next = nullptr; 
    one -> previous = tail; 

    node *two = new node();
    one -> data = 2; 
    one -> next = nullptr; 
    one -> previous = tail; 
    

}