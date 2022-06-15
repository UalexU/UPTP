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
            front = rear = SIZE - 1;
        }

        else if (front = SIZE - 1)
            front = (rear + 1) % SIZE;

        else
            front++;
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
}

int display(){}

;
