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

bool Deque::isFull(){
    if ((rear + 1) % SIZE ) return true;
    else return false; 
}

int Deque::enqueAtRear(int k){
    if (isEmpty()) return; 
    else if(isFull()) return; 
    else if (front =  SIZE - 1){
        front = (rear + 1) % SIZE; 
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
}

int display(){}

;
