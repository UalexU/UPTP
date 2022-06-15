#include <iostream>
using namespace std;

void bubble(int a[], int size);
void insertion();
void quick();

int main(void)
{
    int arr[5] = {5, 2, 4, 9, 0};
    bubble(arr, 5);
    cout << "Your sorted array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// BUBBLE SORT

void bubble(int a[], int size)
{
    int i = 0, temp;
    int j = 1, pass;
    for (pass = 0; pass < size - 1; pass++)
    {
        for (i = 0; i < size - 1 - pass; i++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            i++;
            j++;
        }
    }
}

// void insertion(int a[], int size)
// {
//     int i;
//     for ()
// }

// void quick(int a[], int size)
// {
//     int i;
//     for ()
// }
