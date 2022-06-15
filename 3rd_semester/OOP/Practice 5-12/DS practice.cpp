
#include <iostream>
using namespace std;

// Ex - 01  SEARCHING
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void printLink(Node *temp)
// {
//     while (temp != NULL)
//     {
//         cout << temp->data << " > ";
//         temp = temp->next;
//     }
//     cout << "NULL";
//     cout << endl;
// }

// bool searchList(Node *temp, int searched)
// {
//     while (temp != NULL)
//     {
//         if (temp->data == searched)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// int main()
// {
//     system("cls");
//     Node *head = NULL;
//     Node *first = NULL;
//     Node *second = NULL;
//     Node *third = NULL;
//     Node *fourth = NULL;
//     Node *fifth = NULL;
//     Node *temp = NULL;

//     head = new Node();
//     first = new Node();
//     second = new Node();
//     third = new Node();
//     fourth = new Node();
//     fifth = new Node();
//     temp = new Node();

//     first->data = 14;
//     second->data = 21;
//     third->data = 11;
//     fourth->data = 30;
//     fifth->data = 10;

//     head = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = NULL;

//     temp = head;

//     printLink(head);
//     searchList(head, 11) ? cout << "yes !" : cout << "no :(";

//     return 0;
// }

// Ex - 02  SORTING

struct Node
{
    int data;
    struct Node *next;
};

void printList(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " > ";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
};

int main()
{
    system("cls");
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;
    Node *temp = NULL;

    head = new Node();
    first = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    first->data = 14;
    second->data = 21;
    third->data = 11;
    fourth->data = 30;
    fifth->data = 10;

    printList(head);
    Node *current = new Node();
    Node *index = new Node();

    current = head;
    int x = 0;

    while (current != NULL)
    {
        index = current->next;
        while (index != NULL)
        {
            if (current->data > index->data)
            {
                x = current->data;
                current->data = index->data;
                index->data = x;
            }
            index = index->next;
        }
        current = current->next;
    }
    printList(head);

    return 0;
}

// Ex - 03  MERGING
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void printList(Node *temp)
// {
//     while (temp != NULL)
//     {
//         cout << temp->data << " > ";
//         temp = temp->next;
//     }
//     cout << "NULL";
//     cout << endl;
// };

// int main()
// {
//     system("cls");
//     Node *head = NULL;
//     Node *first = NULL;
//     Node *second = NULL;
//     Node *third = NULL;
//     Node *fourth = NULL;
//     Node *fifth = NULL;
//     Node *temp = NULL;

//     head = new Node();
//     first = new Node();
//     second = new Node();
//     third = new Node();
//     fourth = new Node();
//     fifth = new Node();
//     temp = new Node();

//     first->data = 14;
//     second->data = 21;
//     third->data = 11;
//     fourth->data = 30;
//     fifth->data = 10;

//     head = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = NULL;

//     Node *head2 = NULL;
//     Node *sixth = NULL;
//     Node *seventh = NULL;
//     Node *eighth = NULL;

//     head2 = new Node();
//     sixth = new Node();
//     seventh = new Node();
//     eighth = new Node();

//     sixth->data = 12;
//     seventh->data = 15;
//     eighth->data = 18;

//     head2 = sixth;
//     sixth->next = seventh;
//     seventh->next = eighth;
//     eighth->next = NULL;

//     printList(head);
//     printList(head2);

//     head2 = temp;
//     fifth->next = sixth;
//     delete head2;
//     printList(head);
// }