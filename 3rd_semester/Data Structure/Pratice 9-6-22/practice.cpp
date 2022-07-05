#include <iostream>
using namespace std;
#define SIZE 5

class Deque
{
private:
    int arr[SIZE];
    int front, rear, element;

public:
    Deque();
    int isEmpty()
    {
        if (rear == NULL && front == NULL)
            return true;
        else
            return false;
    };

    int isFull()
    {
        if ((rear + 1) % SIZE)
        {
            return true;
        }
        else
            return false;
    }

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
    }

    int dequeueAtFront()
    {
        int x = 0;
        if (isFull())
        {
            cout << "Overflow!" << endl;
            return;
        }

        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = rear = -1;
        }

        else if (front == SIZE - 1)
        {
            x = arr[front];
            arr[front] = 0;
            front = 0;
        }

        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
        }
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
