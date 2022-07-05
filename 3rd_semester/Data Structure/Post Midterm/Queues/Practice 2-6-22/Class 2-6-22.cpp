#include <iostream>

using namespace std;

class Queue
{
private:
    int arr[5], front, rear; // Front and rear are in pos -1 at the start

public:
    Queue(int arr[5] = {0}, int front = -1, int rear = -1);
    bool isEmpty(); // Check if empty
    bool isFull();  // Check if full
    int enQueue(int);
    int deQueue();
    int count(); // Takes no parameter
    void display();
};

bool Queue::isEmpty()
{
    if (rear == -1 & front == -1)
    {
        // My front and rear would move to the 0 pos of the array
        front++;
        rear++;
        return true;
    }
    else
        return false;
};

bool Queue::isFull()
{
    if (rear == 5 - 1) //size - 1
    {
        return true;
    }
    else
        return false;
};

int Queue::enQueue(int num)
{
    if (isFull() == true)
    {
        cout << "Your Queueu is full";
        return 0;
    }

    else if (isEmpty() == true)
    {
        cout << "Your Queueu is empty";
        return 0;
    }

    else
    {
        arr[rear] = num;
        rear++;
    }
};

int Queue::deQueue()
{
    if (isEmpty() == true)
    {
        cout << "The Queueu is empty";
        return 0;
    }
    if (front == 0 && rear == 0)
    {
        
    }
};

int Queue::count()
{
    return (rear - front + 1); // +1 because the array starts at the 0 position
};

void Queue::display()
{
    if (isEmpty() == true)
    {
        cout << "The array is empty";
    }

    else if (isFull() == true)
    {
        cout << "The array is full";
    }

    else
    {
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
}