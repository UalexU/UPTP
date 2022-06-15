// Built a linked list//
#include <iostream>
using namespace std;

// int A[5] = {1,2,3,4,5}
// int *p; p = &A[5] or p = arr;
struct Node
{
    int data;
    Node *next;
};

void printLink(Node *temp)
{
    // No entiendo para que sirve/*
    /*
    for (int i = 1; i <pos ; i++){
        if (temp -> next != NULL)
            temp = temp ->next;
    }
    fifteen -> next = temp -> next;
    temp -> next = fifteen;
    fifteen -> data =15;
    */
    while (temp->next != NULL)
    {
        cout << temp->data << "------>";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
    // at the end insert
}
int main()
{
    Node *head = new Node(); /*The head apunta a la memoria tipo dinamico*/
    Node *zero = new Node(); // Inserted Node
    Node *first = new Node();
    Node *fifteen = new Node(); // Inserted Node
    Node *second = new Node();
    Node *third = new Node();

    // Input data
    head->data = 10;
    zero->data = 0;
    first->data = 20;
    fifteen->data = 15;
    second->data = 30;
    third->data = 40;

    // linked list
    head->next = zero;
    zero->next = first;
    first->next = fifteen;
    fifteen->next = second;
    second->next = third;
    third->next = NULL;
    // ERASE NODE ZERO
    head = first;
    delete zero;

    // print
    printLink(head);

    // Insert at the end
    Node *fourth = new Node();
    fourth->data = 50;
    third->next = fourth;
    fourth->next = NULL;
}