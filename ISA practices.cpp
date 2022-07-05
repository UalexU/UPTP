//DS Practice - Isaias Candia

#include <iostream>
using namespace std;
//Ex01 - Insert at Beginning
/*
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = new Node();
Node *tail = new Node();

void insertAtBeginning(int num){
    Node *ptr = new Node();
    Node *temp= new Node();
    if(head==NULL)
        cout<<"Empty"<<endl;
    else{
        ptr -> data = num;
        ptr -> prev = NULL;
        ptr -> next = head;
        head -> prev = ptr;
        head = ptr;
        //Assign tail
        temp = head;
        while(temp -> next != NULL)
            temp = temp -> next;
        tail = temp;
    }
}
void printForward(){
    Node *temp = head;
    cout<<"Forward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void printBackward(){
    Node *temp = tail;
    cout<<"Backward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> prev;
    }    
    cout<<endl;
}
int main()
{
    Node *first = new Node();
    
    first -> next = NULL;
    first -> prev = NULL;
    head = first;
    tail = first;
    
    first -> data = 4;
    insertAtBeginning(8);
    printForward();
    printBackward();
    return 0;
}
*/
//Ex02 - Insert at end
/*
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = new Node();
Node *tail = new Node();

void insertAtEnd(int num){
    Node *ptr = new Node();
    if(head==NULL)
        cout<<"Empty"<<endl;
    else{
        ptr -> data = num;
        tail ->  next = ptr;
        ptr -> prev = tail;
        ptr -> next = NULL;
        tail = ptr;
    }
}
void printForward(){
    Node *temp = head;
    cout<<"Forward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void printBackward(){
    Node *temp = tail;
    cout<<"Backward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> prev;
    }    
    cout<<endl;
}
int main()
{
    Node *first = new Node();
    
    first -> next = NULL;
    first -> prev = NULL;
    head = first;
    tail = first;
    
    first -> data = 4;
    insertAtEnd(6);
    printForward();
    printBackward();
    return 0;
}
*/
//Ex03 - Insertion at Specific position
/*
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = new Node();
Node *tail = new Node();

void insertAtSpecific(int num, int pos){
    Node *temp = new Node();
    Node *ptr = new Node();
    if(head==NULL)
        cout<<"Empty"<<endl;
    else{
        temp = head;
        for (int i=1; i<pos-1; i++ ){
            temp = temp -> next;
        }
        ptr -> data = num;
        ptr -> next = temp -> next;
        ptr -> prev = temp;
        temp -> next -> prev = ptr
        temp -> next = ptr;
    }
}
void printForward(){
    Node *temp = head;
    cout<<"Forward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void printBackward(){
    Node *temp = tail;
    cout<<"Backward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> prev;
    }    
    cout<<endl;
}
int main()
{
    Node *first = new Node();
    
    first -> next = NULL;
    first -> prev = NULL;
    head = first;
    tail = first;
    
    first -> data = 4;
    insertAtSpecific(6,2);
    printForward();
    printBackward();
    return 0;
}
*/
//Ex04 - Deletion at Beginning
/*
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = new Node();
Node *tail = new Node();

void deletionAtBeginning(){
    Node *temp = new Node();
    if(head==NULL)
        cout<<"Empty"<<endl;
    else{
        temp = head;
        head = head -> next;
        head -> prev = NULL;
        delete temp;
    }
}

void printForward(){
    Node *temp = head;
    cout<<"Forward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void printBackward(){
    Node *temp = tail;
    cout<<"Backward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> prev;
    }    
    cout<<endl;
}
int main()
{
    Node *first = new Node();
    
    first -> next = NULL;
    first -> prev = NULL;
    head = first;
    tail = first;
    
    first -> data = 4;
    deletionAtBeginning();
    printForward();
    printBackward();
    return 0;
}
*/
//Ex05 - Deletion At end
/*
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = new Node();
Node *tail = new Node();

void deletionAtEnd(){
    Node *temp = new Node();
    if(head==NULL)
        cout<<"Empty"<<endl;
    else{
        temp = head;
        while (temp -> next != NULL)
            temp = temp -> next;
        tail = temp -> prev;
        temp -> prev -> next = NULL;
        delete temp;
    }
}

void printForward(){
    Node *temp = head;
    cout<<"Forward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void printBackward(){
    Node *temp = tail;
    cout<<"Backward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> prev;
    }    
    cout<<endl;
}
int main()
{
    Node *first = new Node();
    
    first -> next = NULL;
    first -> prev = NULL;
    head = first;
    tail = first;
    
    first -> data = 4;
    deletionAtEnd();
    printForward();
    printBackward();
    return 0;
}
*/
//Ex06 - Deleting Given Value
/*
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = new Node();
Node *tail = new Node();

void deletionAtValue(int value){
    Node *temp = new Node();
    Node *ptr = new Node();
    if(head==NULL)
        cout<<"Empty"<<endl;
    else{
        ptr = head;
        while (ptr -> data != NULL){
            temp = ptr;
            ptr = ptr -> next;
        }
        if ((ptr->prev==NULL)&&(ptr->data==num)){
            ptr->next->prev=NULL;
            head = ptr -> next;
            delete ptr;
        }else if ((ptr->next==NULL)&&(ptr->data==num)){
            tail=ptr->prev;
            temp->next=NULL;
            delete ptr;
        }else{
            temp->next=ptr->next;
            ptr->next->prev=temp;
            delete ptr;
        }
    }
}

void printForward(){
    Node *temp = head;
    cout<<"Forward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void printBackward(){
    Node *temp = tail;
    cout<<"Backward printing = ";
    while (temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> prev;
    }    
    cout<<endl;
}
int main()
{
    Node *first = new Node();
    
    first -> next = NULL;
    first -> prev = NULL;
    head = first;
    tail = first;
    
    first -> data = 4;
    deletionAtValue(4);
    printForward();
    printBackward();
    return 0;
}
*/



//DS Practice - Isaias Candia
#include <iostream>
using namespace std;
//Ex01 - Print Circular Linked List
/*
struct Node
{
    int data;
    struct Node *next;
};

void printCircular(Node *temp){
    Node *tempHead = new Node();
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else
        do{
            cout << temp -> data << " ";
            temp = temp -> next;
        }while (temp != tempHead);
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    
    head = first;
    first -> next = second;
    second -> next = third;
    third -> next = head;
    
    first -> data = 5;
    second -> data = 13;
    third -> data = 11;
    printCircular(head);
    return 0;
}
*/
//Ex02 - Insertion at End 
/*
struct Node
{
    int data;
    struct Node *next;
};

void insertionAtEnd(Node *temp, int num){
    Node *tempHead = new Node();
    Node *newNode = new Node();
    newNode -> data = num;
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else{
        newNode -> data = num;
        while (temp->next != tempHead)
            temp = temp -> next;
        temp -> next = newNode;
        newNode -> next = tempHead;
    }
}

void printCircular(Node *temp){
    Node *tempHead = new Node();
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else
        do{
            cout << temp -> data << " ";
            temp = temp -> next;
        }while (temp != tempHead);
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    
    head = first;
    first -> next = second;
    second -> next = third;
    third -> next = head;
    
    first -> data = 5;
    second -> data = 13;
    third -> data = 11;
    
    insertionAtEnd(head, 42);
    printCircular(head);
    
    return 0;
}
*/
//Ex03 - Insertion at Beginning
/*
struct Node
{
    int data;
    struct Node *next;
};

Node *insertionAtBeginning(Node *temp, int num){
    Node *tempHead = new Node();
    Node *newNode = new Node();
    newNode -> data = num;
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else{
        newNode -> data = num;
        while (temp->next != tempHead)
            temp = temp -> next;
        temp -> next = newNode;
        newNode -> next = tempHead;
        tempHead = newNode;
    }
    return tempHead;
}

void printCircular(Node *temp){
    Node *tempHead = new Node();
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else
        do{
            cout << temp -> data << " ";
            temp = temp -> next;
        }while (temp != tempHead);
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    
    head = first;
    first -> next = second;
    second -> next = third;
    third -> next = head;
    
    first -> data = 5;
    second -> data = 13;
    third -> data = 11;
    
    head = insertionAtBeginning(head, 42);
    printCircular(head);
    
    return 0;
}
*/
//Ex04 - Deletion at End
/*
struct Node
{
    int data;
    struct Node *next;
};

void deletionAtEnd(Node *temp){
    Node *tempHead = new Node();
    Node *pretemp = new Node();

    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else{
        while (temp->next != tempHead){
            pretemp = temp;
            temp = temp -> next;
        }
        pretemp -> next = tempHead;
        delete(temp);
    }
}

void printCircular(Node *temp){
    Node *tempHead = new Node();
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else
        do{
            cout << temp -> data << " ";
            temp = temp -> next;
        }while (temp != tempHead);
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    
    head = first;
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = head;
    
    
    first -> data = 5;
    second -> data = 13;
    third -> data = 11;
    fourth -> data = 18;
    
    deletionAtEnd(head);
    printCircular(head);
    
    return 0;
}
*/
//Ex05 - Deletion at Beginning
/*
struct Node
{
    int data;
    struct Node *next;
};

Node *deletionAtBeginning(Node *temp){
    Node *tempHead = new Node();
    Node *newHead = new Node();

    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else{
        while (temp->next != tempHead){
            temp = temp -> next;
        }
        temp->next = tempHead->next;
        newHead = temp -> next;
        delete(tempHead);
    }
    return newHead;
}

void printCircular(Node *temp){
    Node *tempHead = new Node();
    tempHead = temp;
    if (temp->next==NULL)
        cout << "Empty list";
    else
        do{
            cout << temp -> data << " ";
            temp = temp -> next;
        }while (temp != tempHead);
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    
    head = first;
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = head;
    
    
    first -> data = 5;
    second -> data = 13;
    third -> data = 11;
    fourth -> data = 18;
    
    head = deletionAtBeginning(head);
    printCircular(head);
    
    return 0;
}
*/


//OOP practice23/06 - Isaias Candia
#include <iostream>
using namespace std;
//Ex02 - A
/*
template<class T>
void displayValue(T v){
    cout << "***" << v << "***" << endl;
}
int main()
{
    char value1='a';
    int value2=5;
    double value3=5.5;
    string value4="Us";
    
    displayValue(value1);
    displayValue(value2);
    displayValue(value3);
    displayValue(value4);
    return 0;
}
*/
//Ex02 - B
/*
template<class T>
void display(T v){
    cout << "***" << v << "***" << endl;
}
class Employee
{
    friend ostream& operator<<(ostream&, Employee);
    private:
        string name;
        int idNum, salary;
    public:
        Employee(string n, int id, int s){
            name=n;
            idNum=id;
            salary=s;
        }
};
ostream& operator<<(ostream& out, Employee e){
    out << endl << "Employee: " << e.name << endl;
    out << "Id number: " << e.idNum << endl;
    out << "Salary: " << e.salary << endl;
    return out;
}
int main()
{
    Employee emp("Isaias Candia",1,30000);
    display(emp);
    return 0;
}
*/
//Ex03 
/*
template<class T, class U>
T addMinutes(T min1, U min2){
    T totalMinutes;
    totalMinutes = min1+min2;
    return totalMinutes;
}
class Homework
{
    private:
        string name,assignment;
        int minutes;
    public:
        void setValues(string n, string a, int m){
            name = n;
            assignment = a;
            minutes = m;
        }
        void displayValues(){
            cout << name <<"'s assignment is " << assignment << endl;
            cout << "with " << minutes << " minutes to complete" << endl;
        }
        void displaySum(){
            cout << endl << "In total I have " << minutes << " minutes of homework" << endl;
        }
        Homework operator+(Homework m){
            Homework totalMinutes;
            totalMinutes.minutes=minutes+m.minutes;
            return totalMinutes;
        }
};

int main()
{
    Homework h1;
    h1.setValues("Math", "Read chapter 11", 15);
    h1.displayValues();
    
    Homework h2;
    h2.setValues("English", "Read chapter 9", 35);
    h2.displayValues();
    
    Homework sum;
    sum = addMinutes(h1,h2);
    sum.displaySum();
    
    cout << "-Testing-" << endl;
    int i1=3,i2=6;
    cout << "Sum with integers is " << addMinutes(i1,i2) << endl;
    double d1=3.6, d2=3.8;
    cout << "Sum with doubles is " << addMinutes(d1,d2) << endl;
    
    return 0;
}
*/