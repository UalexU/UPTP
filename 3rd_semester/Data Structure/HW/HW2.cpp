#include <iostream>
using namespace std;
/*Prompt the user to enter two sparse matrices of the same size (validate the input), convert them into
triplet representation and print them out. Please implement triplets in the format a[m][3].*/
int main(void)
{

    int i, j, k = 0, n1, m1, n2, m2;
    int v, count, elements;
    int a[10][10], b[10][10], t1[4][3], t2[5][5];

    // Enter values for the two matrices
    cout << "Enter your the rows of the first array" << endl;
    cin >> n1;
    cout << "Enter your the columns of the first array" << endl;
    cin >> m1;
    cout << "Enter the values of the matrix" << endl;

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            cin >> a[i][j];
            elements++;
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (elements / 2 >= count)
        cout << "This is a sparse matrix";
    else
        cout << "Please input a sparse matrix";

    elements = 0;

    cout << "Enter your the rows of the second array" << endl;
    cin >> n2;
    cout << "Enter your the columns of the second array" << endl;
    cin >> m2;

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            cin >> b[i][j];
            elements = elements + 1;
            if (b[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (elements / 2 >= count)
        cout << "This is a sparse matrix";
    else
        cout << "Please input a sparse matrix";
}
/*Then, please also sum the two sparse matrices that were input (using their triplet representation).
Please consider that:
a. If you are summing up triplets of different sizes, let’s say a[4][3] and b[3][3], your resulting triplet
should be of size c[7][3] in the worst case (when no elements are in the same position so they
cannot be summed up).
b. To sum the two triplets, you need to check if the elements are at the same position (row and
column). To do so, you may need to iterate and compare positions of elements in a and b using
two different counter (i for a and j for b).
c. To fill the resulting triplet (the one with the sum of elements) you need to compare:
i. If elements of a and b are in the same row position and then check if they are in same
column position too. If so, you can sum the non-zero values and fill c with the position
and the resulting value.
ii. If elements in a and b are in the same row, but in different columns, you need to check
which one is in a lower column position and then place the one with lower column
position in c.
iii. If none of the above conditions are met, you can fill the element with its positions in c*/

/*Use one of the two triplets the user has input and transpose it. Please print the matrix before and after
transposition.
Please consider that:
1. You can exchange columns and rows, but then you should order the resulting matrix. Another
strategy is to iterate over the column of the original triplet and according to its value, fill the resulting
matrix.*/
