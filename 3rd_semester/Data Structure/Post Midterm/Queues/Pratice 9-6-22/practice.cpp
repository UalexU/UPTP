#include <iostream>
using namespace std;
#define SIZE 5

class Deque
{
private:
    int arr[SIZE];
    int front, rear, element;

public:
    Deque(int arr[SIZE], int front = -1, int rear = -1);
    bool isEmpty();

    bool isFull();

    int enqueAtRear(int k);

    int dequeueAtFront();
};

bool Deque::isEmpty(){
        if (rear == NULL && front == NULL)
            return true;
        else
            return false;
    }

<<<<<<< HEAD:3rd_semester/Data Structure/Pratice 9-6-22/practice.cpp
    int enqueAtRear(int k)
    {
        if (isFull())
        {
            cout << "Overflow!" << endl;
            return;
        }

        else if (isEmpty())
        {
            front = rear = SIZE - 1;  // 0 , 1 , 2, 3, 4  front = rear = Position 4 (4)
        }

        else if (front = SIZE - 1)
            front = (rear + 1) % SIZE; // Reset the position 

        else
            front++; //If not we can traverse the array without problems
=======
bool Deque::isFull(){
    if ((rear + 1) % SIZE ) return true;
    else return false; 
}

int Deque::enqueAtRear(int k){
    if (isEmpty()) return; 
    else if(isFull()) return; 
    else if (front =  SIZE - 1){
        front = (rear + 1) % SIZE; 
>>>>>>> 261b44090104e4097c38022fa6436820ae895438:3rd_semester/Data Structure/Post Midterm/Queues/Pratice 9-6-22/practice.cpp
    }
    
    else {
        arr[front] = k; 
        front++; //If queue not full we move the front one position 
    }
}

int Deque::dequeueAtFront(){

        int x = 0;
        if (isFull()){
            cout << "Overflow!" << endl;
            return;
        }

        else if (front == rear){
            x = arr[front];
            arr[front] = 0;
            front = rear = -1;
        }

        else if (front == SIZE - 1){
            x = arr[front];
            arr[front] = 0;
            front = 0;
        }

        else{
            x = arr[front];
            arr[front] = 0;
            front++;
        }
}


dequeueAtRear()
{
}

int count()
{
    int i, count = 0;
    if(isEmpty()) return 0;
    else if (isFull()) {
        for (i = 0; i < N; i++ ){
            
        }
    }
}

int display(){
    cout << "" << '\n'; 
}
