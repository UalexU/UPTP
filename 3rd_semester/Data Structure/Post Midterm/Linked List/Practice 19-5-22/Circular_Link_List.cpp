#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
// node* &head is the value of the head node because uses the & (ampersand)
void insertAtHead(node* head, int val){
    // 1- We create a new node 
    node* newNode = new node();
    node* temp = head; 
    newNode->data = val; //Set the value of the new node
    // 2- Find where the last element points (The temp pointer traverses the link list until find the last node)
    while (temp->next != NULL) 
        temp = temp->next; 
    // 3- Make the last node equal to the new node
    temp->next = newNode;
    
    // 4- Make the new node equal to the first element
    newNode->next = head;
    // 5- Make the first element point to the new node 
    head = newNode; 
    
}

void insertAtEnd(node* head, int val){
    node* newNode = new node();
    node* temp = new node(); 

    if (head == NULL){
        cout <<"Empty list" << endl; 
        // insertAtHead(head, val);
    }
    else{
        // Make temp equal to head
        temp = head;
        //Assing the value of the new node with the value we input into the function
        newNode->data = val; 
        //Traverse the linkk list until one position before the head 
        while (temp->next != head){
            temp=temp->next;
        }

        //Link the temp node to our new added node
        temp->next = newNode;
        //link the new node to our head
        newNode->next = head; 
    }

} 


//This is and endless loop beacuse is circular 
void printCircular(node *head){
    node *temp = new node();
    temp = head; 
    if (head = NULL){
        cout << "The link list is empty";
    }
    else{
        do
        {
            cout << temp->data << "---->"; 
            temp = temp->next; 
            _sleep(1000);
        } while (temp != head);
    }
    cout << "NULL" <<endl;
}

int main(void){
    //The head keps the information of the first node to avoid lossing its position
    node *head = new node(); 
    insertAtHead(head, 1);
    insertAtEnd(head, 5);
    insertAtEnd(head, 2);

    printCircular(head);




}